# snl
The Standard Neil Library, a C++ library for convenience functions.

![Build](https://github.com/neilwiborg/snl/actions/workflows/c-cpp.yml/badge.svg)

To include snl in your code, follow these steps in your terminal:
1. `cd` into your project directory (e.g. "HelloWorld"). This directory should contain your project files such as `.cpp` and `.h` files.
2. run the following command: `git clone git@github.com:neilwiborg/snl.git`
3. In your code, add `#include` precompiler directives where you want to use snl code.
   * For instance, you would type `#include "snl/algorithms.h"` to use those methods.
5. All snl code is in the `snl` namespace, so be sure to add the `snl::` prefix to any snl method calls.
