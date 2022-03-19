#include <gtest/gtest.h>
#include <math.h>

/* using namespace testing; */
extern "C" {
#include "roots.h"
}    
TEST(test1, zero_root) {
    ASSERT_EQ(NULL, square_root(0, 0, 5));
    ASSERT_EQ(NULL, square_root(2, 1, 2));
}

TEST(test1, one_root) {
    ASSERT_EQ(1, square_root(1, 2, 1));
}

TEST(test1, two_root) {
    ASSERT_EQ(2, square_root(1, 6, 5));
}
