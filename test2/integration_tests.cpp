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

TEST_CASE("test real input") {
  std::stringstream in;
  in << "Clare Macrae\n";
  in << "1 2\n";
  in << "1 3\n";
  std::stringstream out;
  run(in, out);
  Approvals::verify(out.str());
}
