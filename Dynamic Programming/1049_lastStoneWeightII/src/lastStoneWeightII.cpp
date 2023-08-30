#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
#include "lastStoneWeightII.h"

int Solution::lastStoneWeightII(std::vector<int> &stones)
{
    std::sort(stones.begin(), stones.end());
    int sum = std::accumulate(stones.begin(), stones.end(), 0);
    int target = sum / 2;
    std::vector<int> dp(target + 1, 0);

    for (int stone : stones)
    {
        for (int j = target; j >= stone; j--)
        {
            if (j < stone)
            {
                dp[j] = dp[j - 1];
            }
            else
            {
                dp[j] = std::max(dp[j], dp[j - stone] + stone);
            }
        }
    }

    return sum - 2 * dp[target];
}