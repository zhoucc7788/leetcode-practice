#include "findTargetSumWays.h"

int Solution::findTargetSumWays(std::vector<int> &nums, int target)
{
    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    int result = 0;

    if ((sum - target) % 2 != 0)
        return 0;

    int aim = (sum - target) / 2 < 0 ? (sum - target) / 2 + target : (sum - target) / 2;

    std::sort(nums.begin(), nums.end());

    std::vector<int> dp(aim + 1, 0);
    dp[0] = 1;

    for (int num : nums)
    {
        for (int j = aim; j >= num; j--)
        {
            dp[j] = dp[j] + dp[j - num];
        }
    }

    return dp[aim];
}