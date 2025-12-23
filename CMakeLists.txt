cmake_minimum_required(VERSION 3.10)
project(CoreEngine LANGUAGES C VERSION 1.0.0)


set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_EXTENSIONS OFF)  

add_compile_options(-Wall -Wextra -g)


set(ENGINE_SOURCES
    engine/src/engine.c
    engine/include/math/vectors/2Dvector/2Dvector.c
    engine/include/math/vectors/3Dvector/3Dvector.c
)

add_library(engine STATIC ${ENGINE_SOURCES})

target_include_directories(engine PUBLIC engine/include)

target_link_libraries(engine PRIVATE m)

target_compile_options(engine PRIVATE -Wall -Wextra -g)

add_executable(2Dtests1 tests/2Dvector_tests/2Dtests1.c)

target_link_libraries(2Dtests1 PRIVATE engine)

enable_testing()
add_test(NAME Vec2Tests COMMAND 2Dtests1)

#for 3D
add_executable(3Dtests1 tests/3Dvector_tests/3Dtests1.c)
target_link_libraries(3Dtests1 PRIVATE engine)
add_test(NAME Vec3Tests COMMAND 3Dtests1)