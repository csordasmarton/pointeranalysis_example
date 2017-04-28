cmake_minimum_required(VERSION 2.8.9)
project(PointerAnalysisTest)

set(CMAKE_CXX_STANDARD 14)

add_executable(pointers pointers.cpp)
add_executable(char char.cpp)
add_executable(members members.cpp)
add_executable(functions functions.cpp)
add_executable(new new.cpp)
add_executable(references references.cpp)
add_executable(shared_ptr shared_ptr.cpp)
add_executable(unique_ptr unique_ptr.cpp)
