#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include <iostream>
#include <string>

int main(int argc, char** argv) {
    doctest::Context context;
    context.applyCommandLine(argc, argv);
    context.setOption("no-breaks", true);

    std::cout << "starting tests\n" << '\n';

    int res = context.run();

    return res;
}

TEST_CASE("a test test case") {
    CHECK(1 == 1);
}