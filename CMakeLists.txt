cmake_minimum_required(VERSION 3.10)
project(CoreEngine LANGUAGES C VERSION 1.0.0)

# -------------------------------
# C standard & compile options
# -------------------------------
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)
add_compile_options(-Wall -Wextra -g)

# -------------------------------
# Engine sources
# -------------------------------
set(ENGINE_SOURCES
    engine/src/engine.c
    engine/include/math/vectors/2Dvector/2Dvector.c
    engine/include/math/vectors/2Dvector/Lerp/lerp2D.c
    engine/include/math/vectors/3Dvector/3Dvector.c
    engine/include/math/vectors/2Dvector/Lerp/lerp3D.c
)

# -------------------------------
# Engine library
# -------------------------------
add_library(engine STATIC ${ENGINE_SOURCES})

# Include directories for engine headers
target_include_directories(engine PUBLIC
    ${PROJECT_SOURCE_DIR}/engine/include
    ${PROJECT_SOURCE_DIR}/engine/include/entities
    ${PROJECT_SOURCE_DIR}/engine/include/math/vectors/2Dvector
    ${PROJECT_SOURCE_DIR}/engine/include/math/vectors/2Dvector/Lerp
    ${PROJECT_SOURCE_DIR}/engine/include/math/vectors/3Dvector
)

# Link math library
target_link_libraries(engine PRIVATE m)

# Compiler options for engine
target_compile_options(engine PRIVATE -Wall -Wextra -g)

# -------------------------------
# 2D vector test
# -------------------------------
add_executable(2Dtests1 ${PROJECT_SOURCE_DIR}/tests/2Dvector_tests/2Dtests1.c)
target_link_libraries(2Dtests1 PRIVATE engine)
add_test(NAME Vec2Tests COMMAND 2Dtests1)

# -------------------------------
# 3D vector test
# -------------------------------
add_executable(3Dtests1 ${PROJECT_SOURCE_DIR}/tests/3Dvector_tests/3Dtests1.c)
target_link_libraries(3Dtests1 PRIVATE engine)
add_test(NAME Vec3Tests COMMAND 3Dtests1)

# -------------------------------
# 2D lerp test
# -------------------------------
add_executable(2Dlerp_test ${PROJECT_SOURCE_DIR}/tests/lerp_tests/2Dlerp_tests.c)
target_link_libraries(2Dlerp_test PRIVATE engine)
add_test(NAME 2DLerp COMMAND 2Dlerp_test)

#--------------------------------
#3D lerp test
#--------------------------------
add_executable(3Dlerp_test ${PROJECT_SOURCE_DIR}/tests/lerp_tests/3Dlerp_tests.c)
add_test(NAME 3DLerp COMMAND 3Dlerp_test)
target_link_libraries(3Dlerp_test PRIVATE engine)  # must link engine
