#include "run.h"
#include "catch2/catch.hpp"
#include "ApprovalTests.hpp"

using namespace ApprovalTests;

#include <sstream>

TEST_CASE("test empty input") {
  std::stringstream in;
  std::stringstream out;
  run(in, out);
  Approvals::verify(out.str());
}
