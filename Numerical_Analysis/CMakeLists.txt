cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(Numerical_Analysis VERSION 0.1.0)

include(CTest)
enable_testing()

add_executable(Numerical_Analysis Newton.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
