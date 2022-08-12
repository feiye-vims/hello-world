cmake_minimum_required(VERSION 3.0.0)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(CPP_PP_chapters VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(Chapters)
target_include_directories(Chapters PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/Chapters/")

add_executable(main main.cpp)
target_link_libraries(main PUBLIC Chapters)


set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
