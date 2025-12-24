# Core Engine

Core Engine is an **open-source C engine** designed for **portfolio development**, providing core math, animation, and logic features that developers can use to build projects across platforms.  

> ⚠️ Non-commercial. Purely for learning, practice, and contribution.  

---

## Purpose

- Serve as a **backend/logic engine** for portfolio projects.
- Offer **math and animation foundations**:
  - 2D & 3D vector math
  - Linear interpolation (lerp)
  - Move-towards logic
  - Rotation and transformations
- Developers can connect any frontend:
  - JavaScript for web
  - Flutter for cross-platform apps
  - Other GUI frameworks of choice
- Encourage **learning by building** and open-source contributions.

Think of it like a **mini Godot engine**, but for **portfolio projects**: the engine handles the core logic, while the frontend handles rendering/UI.

---

## Features

### 2D & 3D Vector Math
- Addition, subtraction, scalar multiplication
- Magnitude and normalization
- Move-towards logic
- Linear interpolation (lerp)

### Rotation & Transformation
- 2D rotation around origin and pivot
- 3D rotation around X, Y, Z axes
- 3D pivot rotations using Euler angles

### Frontend-Agnostic
- Integrate with any frontend framework:
  - JavaScript / WebAssembly
  - Flutter / Desktop / Mobile
  - Other rendering frameworks
- Engine provides **logic/math layer**, leaving rendering/UI entirely up to the developer.

---

## Build System

- **CMake-based** static library
- C11 standard, strict warnings (`-Wall -Wextra`)
- Math library linked (`-lm`)
- Test executables for 2D & 3D math
- CTest integration for automated test runs

---

## Project Structure

