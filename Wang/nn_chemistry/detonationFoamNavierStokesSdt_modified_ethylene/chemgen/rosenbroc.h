
ChemicalState
rosenbroc(ChemicalState y,
          const double& dt)
{
        //constants
        ChemicalState y_init = y;
        double gamma = 1.0 + 1.0 / sqrt_gen(double(2));
        double alpha = 1.0/gamma;
        double beta = -2.0/gamma;
        double m1 = 3.0/(2.0 * gamma);
        double m2 = 1.0/(2.0 * gamma);
        double one_minus_gamma = 1.0 - gamma;

        double temperature_ = temperature(y[0], y_init);
        const SpeciesJacobian I = jacobian_I();
        SpeciesJacobian J = source_jacobian(y_init, temperature_);
        SpeciesJacobian G = scale_gen((1.0/(gamma* dt)),  I) - J;// shared for all stages

        // Stage 1
        ChemicalState rhs1 = source(y_init, temperature_);
        #ifdef CHEMGEN_DIRECT_SOLVER
        ChemicalState k1 = invert_jacobian(G) * rhs1;
        #else
        ChemicalState k1 = gmres_solve(G, rhs1);
        #endif
        
        // Stage 2
        ChemicalState y_stage = y_init + alpha * k1;
        double temperature_stage = temperature(y[0], y_stage);

        ChemicalState rhs2 = source(y_stage, temperature_stage) + beta/dt * k1 - rhs1; //source(y_stage) - J @ (a21 * dt * k1)

        #ifdef CHEMGEN_DIRECT_SOLVER
        ChemicalState dk = invert_jacobian(G) * rhs2;
        #else
        ChemicalState dk = gmres_solve(G, rhs2);
        #endif

        ChemicalState k2 = k1 + dk;
        return 
        y_init + scale_gen(m1, k1) + scale_gen(m2, k2); //yn = yn + m1 * k1 + m2 * k2
}