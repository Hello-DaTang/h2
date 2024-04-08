#include <gtest/gtest.h>
#include "sol.h"

TEST(MaxSubArrayTest, Condition1) {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    EXPECT_EQ(maxSubArray(nums), 15);
}

TEST(MaxSubArrayTest, Condition2) {
    std::vector<int> nums = {5, -1, -2, -3, -4};
    EXPECT_EQ(maxSubArray(nums), 5);
}

TEST(MaxSubArrayTest, Condition3) {
    std::vector<int> nums = {-1, -2, -3, -4, 5};
    EXPECT_EQ(maxSubArray(nums), 5);
}

TEST(MaxSubArrayTest, Condition4) {
    std::vector<int> nums = {-1, -2, -3, -4, -5};
    EXPECT_EQ(maxSubArray(nums), -1);
}