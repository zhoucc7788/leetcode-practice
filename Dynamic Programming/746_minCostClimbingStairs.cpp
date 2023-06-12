#include "auxiliary/RamDetect.h"
#include "auxiliary/Timer.h"
#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>

class Solution {
public:
    int minCostClimbingStairs(std::vector<int>& cost) {
        int stages = cost.size();
        int costSum = 0;
        int* minCostSum = (int*)calloc(stages, sizeof(int));
        if (minCostSum != nullptr)
            minCostSum[0] = minCostSum[1] = 0;
        else
            return costSum;

        for (int i = 2; i < stages; i++) {
            minCostSum[i] = std::min(minCostSum[i-1] + cost[i-1], minCostSum[i-2] + cost[i-2]);
        }

        costSum = std::min(minCostSum[stages - 1] + cost[stages - 1], minCostSum[stages - 2] + cost[stages - 2]);

        free(minCostSum);

        return costSum;
    }
};

int main() {
    std::string str;
    Solution sol;
    int result1, result2;

    std::vector<int> cost = { 10, 15, 20 };
    result1 = sol.minCostClimbingStairs(cost);
    std::cout << result1 << "\n";

    cost = {1,100,1,1,1,100,1,1,100,1};
    result1 = sol.minCostClimbingStairs(cost);
    std::cout << result1;
    

    std::cin.get();

    return 0;
}