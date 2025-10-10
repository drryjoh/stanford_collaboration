#!python3
#!python3
# requirements: cantera>=3, numpy, matplotlib
import numpy as np
import cantera as ct
import matplotlib.pyplot as plt

# Color-blind–safe palette (Okabe–Ito)
CB_COLORS = ["#0072B2", "#D55E00", "#009E73", "#CC79A7",
             "#E69F00", "#56B4E9", "#000000"]

def min_mean_free_path(f, gas):
    P_const = f.P
    T = f.T
    Y = f.Y
    lam = np.empty_like(T)
    rho_arr = np.empty_like(T)
    mu_arr = np.empty_like(T)
    for i in range(f.flame.n_points):
        gas.TP = T[i], P_const
        gas.Y = Y[:, i]
        mu = gas.viscosity               # [Pa·s]
        rho = gas.density                # [kg/m^3]
        Mbar = gas.mean_molecular_weight # [kg/kmol]
        # use P_const (pressure in the flame calculation)
        lam[i] = 3.0 * mu / P_const * np.sqrt(np.pi * ct.gas_constant * T[i] / (8.0 * Mbar))
        mu_arr[i] = mu
        rho_arr[i] = rho
    # return min(Δx)/λ evaluated at the smallest cell
    return np.min(np.diff(f.grid)) / lam[np.argmin(np.diff(f.grid))]

# --- Setup ---
P = ct.one_atm*0.5
T0 = 300.0
phi = 1.0
width = 0.003  # domain length [m]
N = 100

# Load mechanism (ensure ffcm2_h2.yaml is in your working directory or give full path)
gas = ct.Solution('ffcm2_h2.yaml', transport_model='Multi')
gas.TP = T0, P
gas.set_equivalence_ratio(phi, fuel='H2', oxidizer='O2:1, N2:3.76')
species_names = gas.species_names
idx_species = species_names.index("H2O2")

# Create freely propagating flame
f = ct.FreeFlame(gas, grid=np.linspace(0, width, N))

# Refinement criteria sets
properties_set = [
    [5, 0.5,   0.5],
    [3, 0.1,   0.1],
    [2, 0.05,  0.05],
    [2, 0.025, 0.025],
    [2, 0.01,  0.01]
]

vel = []
min_dx = []
max_species = []
min_lambda_ratio = []
grids = []
H2O2_profiles = []

for properties in properties_set:
    f.set_refine_criteria(ratio=properties[0], slope=properties[1], curve=properties[2], prune=0.00)
    f.transport_model = 'Mix'  # use mixture-averaged transport
    f.solve(loglevel=1, auto=True)
    grids.append(f.grid)
    H2O2_profiles.append(f.Y[idx_species, :])
    max_species.append(np.max(f.Y[idx_species, :]))
    vel.append(f.velocity[0])
    min_dx.append(np.min(np.diff(f.grid)))
    min_lambda_ratio.append(min_mean_free_path(f, gas))

# -------- Figure 1: H2O2 profiles vs x --------
plt.figure()
for i, properties in enumerate(properties_set):
    label = f"ratio={properties[0]}, slope={properties[1]}, curve={properties[2]}"
    plt.plot(grids[i]*1e3, H2O2_profiles[i],
             label=label, lw=2, color=CB_COLORS[i % len(CB_COLORS)])
plt.xlabel("x [mm]")
plt.ylabel(r"Mass fraction $Y_{H_2O_2}$")
plt.title(r"$Y_{H_2O_2}$ profile vs refinement")
plt.legend(frameon=False)
plt.xlim([33, 34.5])  # kept as in your original
plt.tight_layout()
plt.savefig("H2O2.png",dpi=300)
## L2 norm of H2O2
x_fine = grids[-1]
y_ref  = H2O2_profiles[-1]  # reference on finest grid

def _interp_to_fine(x, y, x_fine):
    if x[0] > x[-1]:
        x = x[::-1]
        y = y[::-1]
    return np.interp(x_fine, x, y)

H2O2_on_fine = [_interp_to_fine(grids[i], H2O2_profiles[i], x_fine)
                for i in range(len(grids))]

sq_err = [(y_i - y_ref)**2 for y_i in H2O2_on_fine]
L2 = np.array([np.sqrt(np.trapz(se, x=x_fine)) for se in sq_err])

den = np.sqrt(np.trapz(y_ref**2, x=x_fine))
L2_rel = L2 / den if den > 0 else L2
RMSE = np.array([np.sqrt(np.mean(se)) for se in sq_err])

flame_speeds  = np.array(vel)
min_dx = np.array(min_dx)
max_species = np.array(max_species)

# -------- Figure 2: L2 error vs min(Δx)/λ --------
plt.figure()
plt.loglog(min_lambda_ratio[:-1], L2_rel[:-1], 'o',
           mfc='none', mec=CB_COLORS[0], ms=7, lw=1.5, color=CB_COLORS[0])
plt.xlabel(r"min cell $\Delta x/\lambda$")
plt.ylabel(r"$L_2$ error in $Y_{H_2O_2}$")
plt.title(r"Grid error vs min $\Delta x/\lambda$")
plt.grid(True, which='both', ls=':')
plt.tight_layout()
plt.savefig("L2.png",dpi=300)
## L2 norm of H2O2

# -------- Figure 3: Percent errors vs min Δx --------
plt.figure()
plt.semilogx(min_lambda_ratio[:-1], np.abs(1 - (flame_speeds[:-1] / flame_speeds[-1]))*100,
         '-', lw=2, color=CB_COLORS[1], label="Flame speed error")
plt.semilogx(min_lambda_ratio[:-1], np.abs(1 - (max_species[:-1] / max_species[-1]))*100,
         '-', lw=2, color=CB_COLORS[2], label=r"max $Y_{H_2O_2}$ error")
plt.ylabel("Percent error relative to most refined [%]")
plt.xlabel(r"min cell $\Delta x/\lambda$")
plt.legend(frameon=False)
plt.tight_layout()
plt.savefig("error.png",dpi=300)

# --- Extract profiles (unchanged) ---
x = f.grid
T = f.T
Y = f.Y
P_const = f.P
print(f.velocity[0])

# Compute mean free path profile from transport properties
lam = np.empty_like(T)
rho_arr = np.empty_like(T)
mu_arr = np.empty_like(T)

for i in range(f.flame.n_points):
    gas.TP = T[i], P_const
    gas.Y = Y[:, i]
    mu = gas.viscosity
    rho = gas.density
    Mbar = gas.mean_molecular_weight
    lam[i] = 3.0 * mu / P * np.sqrt(np.pi * ct.gas_constant * T[i] / (8.0 * Mbar))
    mu_arr[i] = mu
    rho_arr[i] = rho

# Local mesh spacing at cell centers
dx = np.concatenate([np.diff(x), [np.diff(x)[-1]]])

# --- Last plot block: left as-is by request ---
fig, ax1 = plt.subplots()
ax1.semilogy(x*1e3, dx*0 + 1.0, '--k', label=r"$\lambda$")
ax1.semilogy(x*1e3, dx*0 + 3.0, '--r', label=r"$3\lambda$")
ax1.semilogy(x*1e3, dx*0 + 5.0, '--g', label=r"$5\lambda$")
ax1.semilogy(x*1e3, dx*0 + 10.0, '-.k', label=r"$10\lambda$")
ax1.set_ylim([1e-1, 1e5])
ax1.set_xlabel("Distance [mm]")
ax1.set_ylabel(r"$\Delta x / \lambda$")

ax2 = ax1.twinx()
ax2.plot(f.grid*1e3, f.T, 'r-', linewidth=2)
ax1.semilogy(x*1e3, dx/lam, '-k', lw=2, label=r"$\Delta x/\lambda$")
ax2.set_ylabel("Temperature [K]", color='r')
ax2.tick_params(axis='y', labelcolor='r')
ax1.legend(loc="upper left")
plt.xlim([20, 60])
plt.title("H2/air freely propagating flame (1 atm, ϕ=1)")
plt.savefig("mean_free_dx.png", dpi=300)
plt.show()

# Optional: report laminar flame speed
print(f"Computed unburned mixture laminar flame speed [m/s]: {f.velocity[0]:.3f}")
