## Day Four: Added 3D vector math and 2D/3D lerp & rotation

### Engine Updates


- Added **linear interpolation (lerp)**:
  - `vec2_lerp()` for 2D
  - `vec3_lerp()` for 3D
- Added **move-towards** logic:
  - `vec2_movetowards()` for 2D
  - `vec3_movetowards()` for 3D
- Added **rotation operations**:
  - 2D: `vec2_rotation()`, `vec2_rotation_around()`
  - 3D: `vec3_rotate_x()`, `vec3_rotate_y()`, `vec3_rotate_z()`, `vec3_rotation_around()` using Euler angles

### Build System

- CMake updated to include 3D lerp and vector files
- All test executables link with `engine` library
- CTest integration for automated tests of 2D & 3D math

### 2D Tests Output

amntdevil@amntdevil-Lenovo-G50-80:~/core_engine/build$ ./2Dlerp_test
Lerp midpoint: x=0.500000        y=0.500000

Move towards: x=2.156676         y=2.156676

Rotation 90° through origin: x=-10.000000        y=10.000000
Rotation 90° around pivot: x=0.000000    y=10.000000

### 3D Tests Output

amntdevil@amntdevil-Lenovo-G50-80:~/core_engine/build$ ./3Dlerp_test
Lerp midpoint: x=0.500000        y=0.500000      z=0.500000 
Move towards: x=1.760918         y=1.760918      z=1.760918

Rotation 90° Z through origin: x=-10.000000      y=10.000000     z=10.000000
Rotation 90° X through origin: x=10.000000       y=-10.000000    z=10.000000
Rotation 90° Y through origin: x=10.000000       y=10.000000     z=-10.000000
Rotation 90° around pivot: x=10.000000   y=0.000000      z=10.000000