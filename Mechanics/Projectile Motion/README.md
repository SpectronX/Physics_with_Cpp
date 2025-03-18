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
   \$[R \approx R_{\text{vac}} \left( 1 - \frac{4}{3} \frac{V_{y0}}{\tau g} \right)\]$

6. **Maximum Height**:
   \$[H = \left( (V_{i} \sin\theta) + g\tau \right) \tau \left( 1 - e^{-T/\tau} \right) - g\tau T\]$

## Implementation
To also practice some C++ concepts, I decided to incorporate a user-defined library for the calculations. The implementation consists of:

- A **source file (`.cpp`)** containing the function definitions.
- A **header file (`.h`)** storing the function prototypes.
- A **main program** that integrates these components to simulate projectile motion with drag.


## Additional Notes and Tips

- **Diameter Constraints:**  
  The formulas used in this simulation assume that drag is a small perturbation. In particular, the approximation for the range  
  \$[ R \approx R_{\text{vac}} \left( 1 - \frac{4}{3}\frac{V_{y0}}{\tau g} \right)\]$
  is only valid when
  \$[\frac{4}{3}\frac{V_{y0}}{\tau g} < 1.\]$
  Since the characteristic time is given by
  \$[\tau = \frac{m}{\beta D},\]$
  if the projectile's diameter \$(D\)$ is too large, \$(\tau\)$ becomes very small, and the approximation can yield non-physical 
  (negative) ranges. Thus, the model is valid only for small perturbations.

- **Generalized Sphere Assumption:**  
  The simulation assumes a generalized spherical projectile. This allows us to use a fixed drag coefficient (typically \$(C_d = 0.47\)$ for a sphere) and a simplified expression for the drag parameter:
  \$[
  \beta = 0.39 \rho C_d,
  \]$
  where \$(\rho\)$ is the air density (approximately \$(1.225 \, \text{kg/m}^3\)$ at sea level). This assumption simplifies the calculations and provides a baseline for comparison.

- **Comparison with Vacuum Conditions:**  
  One of the primary goals of this simulation is to illustrate how the presence of air resistance (drag) alters projectile motion compared to the ideal (vacuum) case. The differences in time of flight, maximum height, and range provide insight into the effects of drag.

- **Purpose:**  
  This program is intended to demonstrate the impact of drag on projectile motion. It shows the differences in motion parameters when drag is considered versus when it is neglected, serving as an educational tool rather than a high-precision predictive model.

