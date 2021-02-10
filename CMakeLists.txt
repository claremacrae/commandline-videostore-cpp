cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(commandline_videostore_cpp)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_CURRENT_SOURCE_DIR}/CMake/")
include(UseCompilerCache)
useCompilerCache()

# This is needed so that the executable is in the same directory
# as the movies.csv file.
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(dependencies)

enable_testing()
add_subdirectory(test)
add_subdirectory(test2)

set(PROJ_SOURCES run.h run.cpp)
add_library(StoreLib ${PROJ_SOURCES})
target_include_directories(StoreLib
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
        )

add_executable(commandline_videostore_cpp main.cpp)
target_link_libraries(commandline_videostore_cpp StoreLib)
