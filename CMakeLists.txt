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

# Add the test executable
add_executable(test_converter
    tests/test_converter.c
    src/converter.c
)