
ChemicalState 
backwards_euler(ChemicalState y,  
                const double& dt,
                double abs_newton_tol = newton_abs_tol_default,
                double rel_newton_tol = newton_rel_tol_default,
                int  max_iter = newton_iter_max_default)
{
        ChemicalState y_init = y;
        ChemicalState y_guess = y;
        for (int iter = 0; iter < max_iter; ++iter)
        {
            double temperature_ = temperature(y[0], y_guess);
            ChemicalState f = source(y_guess, temperature_);
            SpeciesJacobian J = source_jacobian(y_guess, temperature_);
            SpeciesJacobian A = jacobian_I();
            ChemicalState res = {};
            
            //LHS
            for (int i = 0; i < n_variables; ++i) A[i][i] = A[i][i]/dt;
            A = A - J;

            //RHS
            res = scale_gen(-double(1)/dt, y_guess - y_init) + f;
            //Solve
            #ifdef CHEMGEN_DIRECT_SOLVER
            ChemicalState dy = invert_jacobian(A) * res;
            #else
            ChemicalState dy = gmres_solve(A, res);
            #endif

            //Increment
            y_guess = y_guess + dy;

            if (error_norm(dy, y_guess, abs_newton_tol, rel_newton_tol) < 1.0)
            {
                std::cout << "# Newton iterations = " << iter + 1 << std::endl;
                return y_guess;
            }
        }

        std::cout << "Newton solve did not converge!" << std::endl;

        return y_guess; //sets energy to zero to signal integration broke
}