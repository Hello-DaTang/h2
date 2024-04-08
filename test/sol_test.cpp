#include <gtest/gtest.h>
#include "sol.h"

TEST(MaxSubArrayTest, Empty)
{
    std::vector<int> nums = {};
    EXPECT_EQ(maxSubArray(nums), 0);
}
TEST(MaxSubArrayTest, Empty1)
{
    std::vector<int> nums = {};
    EXPECT_EQ(maxSubArray(nums), 0);
}