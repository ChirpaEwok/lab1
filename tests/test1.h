#ifndef TEST_H
#define TEST_H

#include <gtest/gtest.h>

extern "C" {
#include "roots.h"
}    
TEST(test1, zero_root) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(0, square_root(0, 0, 5, &x1, &x2));
    ASSERT_EQ(0, square_root(2, 1, 2, &x1, &x2));
}

TEST(test1, one_root) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(1, square_root(1, 2, 1, &x1, &x2));
}

TEST(test1, two_root) {
    double x1 = 0;
    double x2 = 0;
    ASSERT_EQ(2, square_root(1, 6, 5, &x1, &x2));
}

#endif // TEST_H
