# Steps

#### Review initial code

* [x] main.cpp and run.cpp
* [x] run `commandline_videostore_cpp` program

#### Recommendations

* Commit your code at every working step
* Try to use refactoring tools when making changes to existing code

#### Set up Catch2-based test program

* [x] Review the CMake file in dependencies/ folder
* [x] Add empty [Catch2](https://github.com/catchorg/Catch2) test program, in test2/ directory
  * [x] main.cpp
  * [x] integration_tests.cpp
  * [x] CMakeLists.txt
    * Hint: depend on Catch2::Catch2
    * Hint: remember to add the new directory to top-level CMakeLists.txt file!

#### Add Catch2 test for run()

* [x] Add test for run() with empty input
  * Hint: Use a raw string literal: `R"()"`
* [x] Try to make it pass, by pasting in actual output

#### Use Approval Tests to test run()

* [ ] Add [ApprovalTests](https://github.com/approvals/ApprovalTests.cpp/) to test2 program
  * Hint: depend on ApprovalTests::ApprovalTests
* [ ] Add first approval test - **empty input**
  * [ ] Hint: copy
    in [code from the docs](https://approvaltestscpp.readthedocs.io/en/latest/generated_docs/UsingCatch.html#code-to-copy-for-your-first-catch2-approvals-test)
* [ ] Compare your new test with the original test in test/

#### Improve test's coverage of run.cpp

* [ ] Show **coverage with CLion**
    * [ ] Use CLion to create config with coverage enabled
* [ ] Show **coverage with [C/C++ Coverage CLion Plugin](C/C++ Coverage CLion Plugin)**
* [ ] Increase coverage
  * Hint: Don't reason about the code
* [ ] What happens if you sabotage a line in run.cpp, and run the tests?
* [ ] Bonus points: Extract method `verifyVideoRentalSession(input)`

#### Make tests independent of production data

* [ ] Copy sample in from Combinations
* [ ] Extract `calculateAmountAndPoints()`
* [ ] Get columns to align - using [fmt](https://github.com/fmtlib/fmt) library
    * Hint: `#include <fmt/core.h>`
    * Hint:  `return fmt::format("\t(Amount: {:7.2f}\tPoints: {}", thisAmount, frequentRenterPoints);`