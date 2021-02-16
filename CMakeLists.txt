cmake_minimum_required(VERSION 3.14 FATAL_ERROR)
project(commandline_videostore_cpp)

set(CMAKE_CXX_STANDARD 14)

add_subdirectory(dependencies)

enable_testing()
add_subdirectory(test)
add_subdirectory(test2)

set(PROJ_SOURCES run.h run.cpp movie_utilities.cpp movie_utilities.h)
add_library(StoreLib ${PROJ_SOURCES})
target_include_directories(StoreLib
        PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}
        )
target_link_libraries(StoreLib PUBLIC ghc_filesystem)

add_executable(commandline_videostore_cpp main.cpp)
target_link_libraries(commandline_videostore_cpp StoreLib)
