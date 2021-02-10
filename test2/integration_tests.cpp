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
