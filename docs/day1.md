1. Importance of a Proper Folder Structure

A well-organized folder structure is crucial in any project, especially in large-scale engine or system development. It helps in:

* Readability: Developers can quickly understand where specific files or modules are located.

* Scalability: Adding new features becomes easier without creating a messy structure.

* Maintainability: Easier to debug, refactor, or extend code without breaking dependencies.

* Collaboration: Team members can work simultaneously without conflicts or confusion.

* Separation of Concerns: Keeps different aspects of the project modular and isolated.

2. Folder Descriptions
* * engine_core/
        Root folder of the engine project.

* * CMakeLists.txt
        Build configuration file for CMake, used to define build targets, include directories, and compiler flags.

* * docs/
        Documentation folder. Stores project notes, design decisions, development logs, and API references.

* * engine/
        Core engine source code. Contains both headers and implementation files.
        
        * * engine_config.h – Holds configuration macros and engine settings.

        * * engine_version.h – Holds versioning information for the engine.

        * * include/ – Public headers for engine usage.

                * * engine.h – Main engine API for initialization and shutdown.

                * * math/ – Math-related headers.

                * * memory/ – Memory management headers.

                * * platform.h – Platform-specific definitions and utilities.

        * * src/ – Engine implementation files.

                * * internal.h – Internal engine declarations.

                * * math/ – Math implementation files.

                * * memory/ – Memory handling implementation.

        * * host/

        Contains platform-specific frontends that interact with the engine.

                * * flutter/ – Flutter integration files.

                * * web/ – Web integration files (JS bridge, HTML, main JS code).

        * * Makefile

        Alternative build system using make, providing commands to compile the engine manually.

        * * tests/

        Unit and integration tests for the engine, ensuring correctness and stability.

        * * tools/

                * * Scripts and utilities to aid development.

                * * build_native.sh – Builds the engine as a native executable.

                * * build_wasm.sh – Compiles the engine to WebAssembly.

                * * run_test.sh – Executes automated tests.

        * * wasm/

        * * WebAssembly build outputs and related files.

                * * bindings/ – Generated bindings for interacting with JS or other languages.

                * * build/ – WASM build output folder.

                * * build.sh – Script to build WASM target.

                * * emcc_flags.txt – Emscripten compiler flags for WASM builds.