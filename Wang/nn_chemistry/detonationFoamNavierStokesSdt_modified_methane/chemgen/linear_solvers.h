#define CHEMGEN_PRECONDITIONER_JACOBI


#ifdef CHEMGEN_PRECONDITIONER_JACOBI

ChemicalState inverse_diagonal(SpeciesJacobian J) 
{
    ChemicalState diag_inv;
    for (int i = 0; i < n_variables; ++i)
    {
        diag_inv[i] = std::abs(J[i][i]) > 1e-14 ? 1.0 / J[i][i] : 0.0;
    }
    return diag_inv;
}
#endif

#ifdef CHEMGEN_PRECONDITIONER_GAUSS_SEIDEL

ChemicalState
apply_gauss_seidel(SpeciesJacobian A, ChemicalState v)
{
    ChemicalState z = {};
    for (int i = 0; i < n_variables; ++i)
    {
        double sum = 0.0;
        for (int j = 0; j < i; ++j)
            sum += A[i][j] * z[j]; // Already computed values of z

        // Diagonal + lower
        double diag = A[i][i];
        z[i] = (v[i] - sum) / (std::abs(diag) > 100.*std::numeric_limits<double>::epsilon() ? diag : 1.0); // Avoid div by zero
    }
    return z;
}
#endif


ChemicalState
gmres_solve(const SpeciesJacobian& A, const ChemicalState& b, double abs_tol=linear_abs_tol_default, double rel_tol=linear_rel_tol_default)
{
    int max_iter = 100;
    ChemicalState x = {};
    ChemicalState cs = {};
    ChemicalState sn = {};

    // Note: if initial guess for x is nonzero, need to replace b below with (b - A*x)
#ifdef CHEMGEN_PRECONDITIONER_JACOBI
    ChemicalState diag_inv = inverse_diagonal(A);
    ChemicalState r = diag_inv * (b);
#elif defined(CHEMGEN_PRECONDITIONER_GAUSS_SEIDEL)
    ChemicalState r = apply_gauss_seidel(A, b);
#else
    ChemicalState r = b;
#endif

    double norm2_r = norm2(r);

    if (norm2_r < std::numeric_limits<double>::epsilon())
    {
        // std::cout << "# GMRES iterations = 0" << std::endl;
        return x;
    }

    std::array<ChemicalState, n_variables + 1> V = {};
    V[0] = scale_gen(inv_gen(norm2_r), r);

    std::array<std::array<double, n_variables>, n_variables + 1> H = {};
    std::array<double, n_variables + 1> g = {};
    g[0] = norm2(r);

    int final_iter = 0;

    for (int j = 0; j < n_variables; ++j)
    {
        final_iter = j;

        ChemicalState w = A * V[j];
#ifdef CHEMGEN_PRECONDITIONER_JACOBI
        w = diag_inv * w;
#elif defined(CHEMGEN_PRECONDITIONER_GAUSS_SEIDEL)
        w = apply_gauss_seidel(A, w);
#endif

        // Modified Gram-Schmidt
        for (int i = 0; i <= j; ++i)
        {
            H[i][j] = dot(V[i], w);
            w = w - H[i][j] * V[i];
        }

        H[j+1][j] = norm2(w);

        V[j+1] = scale_gen(inv_gen(H[j+1][j]),w); // not used if j == n_variables - 1

        // Apply Givens rotations to new column of H
        for (int i = 0; i < j; ++i)
        {
            double temp = cs[i] * H[i][j] + sn[i] * H[i+1][j];
            H[i+1][j] = -sn[i] * H[i][j] + cs[i] * H[i+1][j];
            H[i][j] = temp;
        }
        // Compute new Givens rotation
        double a = H[j][j];
        double b_h = H[j+1][j];
        double r_val = std::sqrt(a * a + b_h * b_h);
        cs[j] = a / r_val;
        sn[j] = b_h / r_val;

        // Apply to H and g
        H[j][j] = r_val;
        H[j+1][j] = 0.0;
        
        double temp_g = cs[j] * g[j];
        g[j+1] = -sn[j] * g[j];
        g[j] = temp_g;
        
        // Convergence check
        double res_norm = std::abs(g[j+1]);
        if (res_norm < abs_tol || res_norm < rel_tol * norm2_r)
            break;
    }

    // Solve least squares problem Hy = g using back-substitution on H (upper triangular, rectangular)
    std::array<double, n_variables> y = {};
    for (int i = final_iter; i >= 0; --i)
    {
        double sum = 0;
        for (int j = i + 1; j <= final_iter; ++j)
            sum += H[i][j] * y[j];
        y[i] = (g[i] - sum) / H[i][i];
    }

    ChemicalState result = {};
    for (int i = 0; i < final_iter + 1; ++i)
        result = result + y[i] * V[i];

    if (final_iter + 1 < n_variables)
    {
        // std::cout << "# GMRES iterations = " << final_iter + 1 << std::endl;
    }

    return result;
}