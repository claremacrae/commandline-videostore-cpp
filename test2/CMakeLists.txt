add_executable(MoreTests main.cpp)

target_link_libraries(MoreTests StoreLib Catch2::Catch2)
add_test(
        NAME MoreTests
        COMMAND MoreTests
        WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})
