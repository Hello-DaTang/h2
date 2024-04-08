#include "gtest/gtest.h"
#include "sol.h"



TEST(MaxSubArrayTest, HandlesPositiveNumbers) {
    std::vector<int> nums = {1, 2, 3, 4, 5};
    EXPECT_EQ(maxSubArray(nums), 15);
}

TEST(MaxSubArrayTest, HandlesNegativeNumbers) {
    std::vector<int> nums = {-1, -2, -3, -4, -5};
    EXPECT_EQ(maxSubArray(nums), -1);
}

TEST(MaxSubArrayTest, HandlesMixedNumbers) {
    std::vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    EXPECT_EQ(maxSubArray(nums), 6);
}