add_executable(test2 main.cpp integration_tests.cpp)
target_link_libraries(test2 StoreLib Catch2::Catch2 ApprovalTests::ApprovalTests fmt::fmt)
