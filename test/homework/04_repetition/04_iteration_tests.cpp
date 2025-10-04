#include "gtest/gtest.h"
#include "repetition.h"

TEST(TestRepetition, TestGetFactorial)
{
    EXPECT_EQ(get_factorial(1), 1);       // 1
    EXPECT_EQ(get_factorial(3), 6);       // 1 * 2 * 3
    EXPECT_EQ(get_factorial(5), 120);     // 1 * 2 * 3 * 4 * 5
    EXPECT_EQ(get_factorial(6), 720);     // 1 * 2 * 3 * 4 * 5 * 6
}

TEST(TestRepetition, TestSumOddNumbers)
{
    EXPECT_EQ(sum_odd_numbers(1), 1);         // 1
    EXPECT_EQ(sum_odd_numbers(5), 9);         // 1 + 3 + 5
    EXPECT_EQ(sum_odd_numbers(10), 25);       // 1 + 3 + 5 + 7 + 9
    EXPECT_EQ(sum_odd_numbers(15), 64);       // 1 + 3 + 5 + 7 + 9 + 11 + 13 + 15
}
