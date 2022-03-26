#include <gtest/gtest.h>

extern "C" {
#include "roots.h"
}    
TEST(amount_of_roots, zero_root) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(0, square_root(0, 0, 5, &x1, &x2));
    ASSERT_EQ(0, square_root(2, 1, 2, &x1, &x2));
    ASSERT_EQ(0, square_root(1.5, 0.5, 1.5, &x1, &x2));
}

TEST(amount_of_roots, one_root) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(1, square_root(1, 2, 1, &x1, &x2));
    ASSERT_EQ(1, square_root(0.8, 1.6, 0.8, &x1, &x2));
}

TEST(amount_of_roots, two_root) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(2, square_root(1, 6, 5, &x1, &x2));
    ASSERT_EQ(2, square_root(1.5, 5, 1.5, &x1, &x2));
}

TEST(root_values, one_root) {
    double x1 = 0;
    double x2 = 0;
    EXPECT_EQ(1, square_root(1, 2, 1, &x1, &x2));
    if (x1 == -1)
        SUCCEED();
    else
        FAIL();
}
