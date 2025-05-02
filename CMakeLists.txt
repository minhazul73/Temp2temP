cmake_minimum_required(VERSION 3.10)

# Project name and version
project(Temp2temP VERSION 1.0 LANGUAGES C)

# Specify the C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED True)

# Enable export of compile_commands.json
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Set additional C compiler flags
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wall")

# Include directories
include_directories(include)

# Add the executable
add_executable(temp_converter
    src/converter.c
    src/main.c
    src/ui.c
)

# Add a target for the test executable
add_executable(test_converter
    tests/test_runner.c
    tests/test_converter.c
    tests/test_main.c
    tests/test_ui.c
    src/converter.c
)

# Link libraries if needed (e.g., for coverage)
target_link_libraries(test_converter PRIVATE gcov)