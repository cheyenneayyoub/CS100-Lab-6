#include "gtest/gtest.h"
#include "../tests/test.cpp"
#include "../header/rectangle.hpp"

using namespace std;

int main(int argc, char** argv) {
        ::testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
