#include "combinationSum4.h"

int Solution::combinationSum4(std::vector<int>& nums, int target){
    std::vector<unsigned long long> dp(target + 1, 0);//小坑，虽然最终答案不超过32位，但中间的产物不一定
    dp[0] = 1;

    for(int j = 0; j <= target; j++){
        for(int num :nums){
            if(num <= j)
                dp[j] = dp[j - num] + dp[j];
        }
    }
    
    return dp[target];
}