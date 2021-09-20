# CMakeList.txt : CMake project for passwordgen, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

project ("passwordgen")

# Add source to this project's executable.
add_executable (passwordgen "passwordgen.cpp" "passwordgen.h")

# TODO: Add tests and install targets if needed.
