#include "combinationSum4.h"

// int Solution::combinationSum4(std::vector<int>& nums, int target){
//     std::vector<int> dp(target+1, 0);

//     dp[0] = 1;

//     for(int num : nums){
//         for(int j = num; j <= target; j++){
//             dp[j] = dp[j - num] + dp[j];
//         }
//     }
    
//     return dp[target];
// }

int Solution::combinationSum4(std::vector<int>& nums, int target){
    std::vector<int> dp(nums.size() + 1, 0);
    std::sort(nums.begin(), nums.end());
    dp[0] = 1;

    for(int j = 0; j <= target; j++){
        for(std::vector<int>::iterator it = nums.begin(); it != nums.end() && *it <= j; it++){
            dp[*it] = dp[*it - j] + dp[*it];
        }
    }
    
    return dp[target];
}