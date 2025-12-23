
## Day Three: Added CMAKE and minimal 2D vector with add, sub, scale, normalize and magnitude

- Static library `engine` with basic 2D vector operations
- CMake build system with:
  - C11 standard
  - Strict warnings (`-Wall -Wextra`)
  - Debug symbols (`-g`)
  - Math library linking (`-lm`)
- Simple test executable for vector operations
- CTest integration for running tests

### 2D Vector Math (`Vec2`)

Implemented operations:
- Addition: `vec2_add()`
- Subtraction: `vec2_sub()`
- Scalar multiplication: `vec2_scalar_scaling()`
- Magnitude (length): `vec2_magnitude()`
- Normalization (unit vector): `vec2_normalize()`

All operations are tested and verified with example inputs.

### Output
amntdevil@amntdevil-Lenovo-G50-80:~/core_engine/build$ ./2Dtests1
Addition result: (3.0, 4.0)
Subtraction result: (1.0, 2.0)
Scalar scaling result: (2.0, 2.0)
Magnitude of vector a (2,3): 3.61
Magnitude of (3,4): 5.0
Normalized (3,4): (0.600, 0.800)  [length should be ~1.0]
(check length: 1.000)
### 3D Vector Math (`Vec3`)

Implemented operations:
- Addition: `vec3_add()`
- Subtraction: `vec3_sub()`
- Scalar multiplication: `vec3_scalar_scaling()`
- Magnitude (length): `vec3_magnitude()`
- Normalization (unit vector): `vec3_normalize()`

All operations are tested and verified with example inputs.

### Outputs

amntdevil@amntdevil-Lenovo-G50-80:~/core_engine/build$ ./3Dtests1
v1 + v2 = (4.00, 6.00, 8.00)
v1 - v2 = (2.00, 2.00, 2.00)
v1 scaled by 2.00 = (6.00, 8.00, 10.00)
|v1| = 7.07
v1 normalized = (0.42, 0.57, 0.71)
zero vector normalized = (0.00, 0.00, 0.00)
