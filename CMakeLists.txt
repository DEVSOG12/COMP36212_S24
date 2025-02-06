cmake_minimum_required(VERSION 3.27)
project(Play C)

set(CMAKE_C_STANDARD 11)

# Create separate executables
add_executable(mixed_precision_example1 src/week2/mixed_precision_example1.c)
add_executable(mixed_precision_example0 src/week2/mixed_precision_example0.c)
add_executable(modified_mixed_precision_example0 src/week2/modified_mixed_precision_example0.c)
