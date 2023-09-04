#include "combinationSum4.h"

int Solution::combinationSum4(std::vector<int>& nums, int target){
    std::vector<int> dp(target+1, 0);

    dp[0] = 1;

    for(int num : nums){
        for(int j = num; j <= target; j++){
            dp[j] = dp[j - num] + dp[j];
        }
    }
    
    return dp[target];
}