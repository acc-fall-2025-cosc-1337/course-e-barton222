#include "data_types.h"
#include <gtest/gtest.h>

TEST(TestMultiplyNumbers, HandlesPositiveNumbers) {
    EXPECT_EQ(multiply_numbers(7, 7), 49);
    EXPECT_EQ(multiply_numbers(5, 5), 25);
}
