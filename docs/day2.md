# Day Two: Minimal Engine Code

## Summary
On Day Two, minimal core engine code was written to set up engine initialization and shutdown. Basic configuration and version headers were also defined.

---

## Files Modified / Created

### `engine/include/engine.h`
- Added include guard: `ENGINE_H`
- Added functions:
  - `engine_initialize()`
  - `engine_shutdown()`

### `engine/include/engine_config.h`
- Added include guard: `ENGINE_CONFIG_H`
- Defined configuration macros:
  ```c
  #define ENGINE_NAME "CoreEngine"
  #define ENGINE_ENABLED_LOGGING 1
