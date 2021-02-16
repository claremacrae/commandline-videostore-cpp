#include "run.h"
#include "catch2/catch.hpp"
#include "ApprovalTests.hpp"
#include <fmt/core.h>
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

TEST_CASE("test non-production data") {
  std::vector<std::string> inputs1{"REGULAR", "CHILDRENS", "NEW_RELEASE"};
  std::vector<int> inputs2{1, 2, 3, 4};
  CombinationApprovals::verifyAllCombinations(
      "(Category, days)",
      [&](auto category, auto days) {
        double amount = 0;
        int points = 0;
        calculateAmountAndPoints(category, days, amount, points);
        return fmt::format("\t(Amount: {:7.2f}\tPoints: {}", amount, points);
      },
      inputs1,
      inputs2);
}
