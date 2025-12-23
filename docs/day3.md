
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

### Folder Structure
