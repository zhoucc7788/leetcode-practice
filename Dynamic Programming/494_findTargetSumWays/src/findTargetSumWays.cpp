#include "findTargetSumWays.h"

int Solution::findTargetSumWays(std::vector<int>& nums, int target){
    int sum = std::accumulate(nums.begin(), nums.end(), 0);
    std::sort(nums.begin(), nums.end());

    std::vector<int> dp(2 * sum + 1 , 0);

    for(int num : nums){
        dp[num] = 1;
        for(int j = num + 1; j <= sum; j++){
            dp[j] = dp[j - num] > 0 ? dp[j] + dp[j - num] : dp[j];
            dp[j] = dp[j + num] > 0 ? dp[j] + dp[j + num] : dp[j];
            dp[-j] = dp[-j + num] > 0 ? dp[-j] + dp[-j + num] : dp[-j];
            dp[-j] = dp[-j - num] > 0 ? dp[-j] + dp[-j - num] : dp[-j];
        }
    }

    return dp[target];
}