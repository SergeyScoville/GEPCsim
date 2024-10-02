cmake_minimum_required(VERSION 3.10)
project(CreateTobs)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the header files
include_directories(include)

# Add the executable
add_executable(CreateTobs src/main.cxx src/create_256tob.cxx)

