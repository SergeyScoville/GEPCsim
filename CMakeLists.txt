cmake_minimum_required(VERSION 3.10)

# Set the project name
project(GEPCsim)

# Specify the C++ standard
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the directory where the headers are located
include_directories(include)

# Add the source files
file(GLOB SOURCES "src/*.cxx")

# Add the executable
add_executable(GEPCsim ${SOURCES})

