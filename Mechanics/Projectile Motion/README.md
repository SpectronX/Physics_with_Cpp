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
   \[ v_x(t) = v_{x0} e^{-t/\tau} \]
   \[ v_y(t) = \left( v_{y0} + g \tau \right) e^{-t/\tau} - g\tau \]

2. **Position Components as a Function of Time**:
   \[ x(t) = v_{x0} \tau \left( 1 - e^{-t/\tau} \right) \]
   \[ y(t) = \left( v_{y0} + g\tau \right) \tau \left( 1 - e^{-t/\tau} \right) - g\tau t \]

3. **Time of Flight**:
   Solving for when \( y = 0 \) yields an equation for total flight time that must be solved numerically.

4. **Range of the Projectile**:
   \[ R = \frac{v_{x0} \tau}{g} \left( v_{y0} + g\tau \right) \]

5. **Maximum Height**:
   \[ h_{max} = \frac{(v_{y0} + g\tau)^2}{2g} \]

## Implementation
To also practice some C++ concepts, I decided to incorporate a user-defined library for the calculations. The implementation consists of:

- A **source file (`.cpp`)** containing the function definitions.
- A **header file (`.h`)** storing the function prototypes.
- A **main program** that integrates these components to simulate projectile motion with drag.
