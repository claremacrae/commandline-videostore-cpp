# commandline-videostore-cpp

<!-- toc -->
## Contents

  * [About...](#about)
  * [Credits](#credits)
  * [Useful Links](#useful-links)
  * [Useful Snippets](#useful-snippets)<!-- endToc -->

## About...

* This is Clare Macrae's fork of Arne Mertz's commandline-videostore-cpp exercise.
  * https://github.com/claremacrae/commandline-videostore-cpp
* The default branch in this fork is `starting-point`
* For more information, and a link to the webinar recording, see the blog
  post [JetBrains Clion Webinar: Code and Slides](https://claremacrae.co.uk/blog/2021/02/clion-webinar-code-and-slides)

## Credits

* Original Java version of the workshop can be found at:
  * https://github.com/rickjanda/commandline-videostore.
* Arne Mertz's original C++ version can be found at:
  * https://github.com/arnemertz/commandline-videostore-cpp
  * YouTube recording: [Arne's "Refactoring C++ Code" webinar](https://www.youtube.com/watch?v=Ks37FFl1pzg)

## Useful Links

* gulrak's filesystem
  * https://github.com/gulrak/filesystem
* Catch2
  * https://github.com/catchorg/Catch2
* Approval Tests for C++
  * https://github.com/approvals/ApprovalTests.cpp/
* fmt library
  * https://github.com/fmtlib/fmt
* C/C++ Coverage CLion Plugin
  * https://github.com/zero9178/GCoverage4CLion/blob/master/README.md

## Useful Snippets

```bash
cd <cmake build directory>
APPROVAL_TESTS_USE_REPORTER=TextDiffReporter watch -c -n 1 "cmake --build . --parallel 4 && ctest . --output-on-failure -R MoreTests"
```
