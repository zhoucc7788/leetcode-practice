#include "canPartition.h"

bool Solution::canPartition(std::vector<int> &nums)
{
    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    if (sum % 2 != 0)
        return false;
    int target = sum / 2;

    std::vector<bool> dp(target + 1, false);
    dp[0] = true;

    for (int num : nums)
    {
        for (int j = target; j >= num; j--)
        {
            dp[j] = dp[j - num] == true ? true : dp[j];
        }
    }
    return dp[target];
}