# Modified Version of Projectile Motion Simulation

This version of the code for projectile motion accounts for drag forces, making the simulation more realistic. With this version, differential equations come into play, making the entire equation more complex, involving terms such as:

- **τ (tau)**: The characteristic time constant for velocity decay due to drag.
- **v₀ (initial velocity)**: The speed at which the projectile is launched.
- **g (gravitational acceleration)**: The acceleration due to gravity (typically 9.81 m/s² on Earth).
- **m (mass of the projectile)**: The mass of the object being launched.
- **c (drag coefficient)**: A parameter that depends on the shape and properties of the projectile.
- **ρ (air density)**: The density of the medium through which the projectile moves.
- **A (cross-sectional area)**: The effective area of the projectile that experiences air resistance.

## Equations Involved
For projectile motion with linear drag, the following equations govern the motion:

1. **Velocity Components as a Function of Time**:
   \$[ v_x(t) = v_{x0} e^{-t/\tau} \]$
   \$[ v_y(t) = \left( v_{y0} + g \tau \right) e^{-t/\tau} - g\tau \]$

2. **Position Components as a Function of Time**:
   \$[ x(t) = v_{x0} \tau \left( 1 - e^{-t/\tau} \right) \]$
   \$[ y(t) = \left( v_{y0} + g\tau \right) \tau \left( 1 - e^{-t/\tau} \right) - g\tau t \]$

3. **Time of Flight**:
   Solving for when \$( y = 0 \)$ yields an equation for total flight time that must be solved numerically.

4. **Range of the Projectile**:
   \$R \approx R_{\text{vac}} \left( 1 - \frac{4}{3} \frac{V_{y0}}{\tau g}$

5. **Maximum Height**:
   \$[ h_{max} = \frac{(v_{y0} + g\tau)^2}{2g} \]$

**Time Constant (\$(\tau\))$ in Projectile Motion with Linear Drag**

In this simulation, we introduce the **time constant** (\$(\tau\))$ to account for the effects of air resistance. The time constant is given by:

\[
$\tau = \frac{m}{b}$
\]

where:
- \(m\) is the mass of the projectile,
- \(b\) is the drag coefficient, which can be expressed as:

\[
$b = \frac{1}{2} C_d \rho A$
\]

For a **spherical projectile**, the drag coefficient \( b \) can also be written as:

\[
$b = \beta D$
\]

where:

\[
$\beta = 0.392 C_d \rho$
\]

For air at sea level (\$(\rho = 1.225 \, \text{kg/m}^3\))$ and a sphere with $\( C_d = 0.47 \)$, we approximate:

\[
$\beta \approx 0.226 \, \text{kg/m·s}$
\]

Thus, the time constant for a spherical projectile in air is:

\[
$\tau = \frac{m}{0.226 D}$
\]

This parameter plays a crucial role in the motion equations by influencing the velocity decay due to drag forces.


## Implementation
To also practice some C++ concepts, I decided to incorporate a user-defined library for the calculations. The implementation consists of:

- A **source file (`.cpp`)** containing the function definitions.
- A **header file (`.h`)** storing the function prototypes.
- A **main program** that integrates these components to simulate projectile motion with drag.
