#include "catch2/catch.hpp"
#include "ApprovalTests.hpp"

#include "run.h"

using namespace ApprovalTests;

TEST_CASE("empty input") {
  std::stringstream input;
  std::stringstream output;
  run(input, output);
  Approvals::verify(output.str());
}

TEST_CASE("real input") {
  std::string typed = R"(Clare
0 1
0 2
0 3
0 4
9 1
9 2
9 3
9 4
12 1
12 2
12 3
12 4

)";
  std::stringstream input;
  input << typed;
  std::stringstream output;
  run(input, output);
  Approvals::verify(output.str());
}
