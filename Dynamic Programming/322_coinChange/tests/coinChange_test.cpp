#include <iostream>
#include <vector>
#include "coinChange.h"

int main()
{
    std::vector<int> coins = {3, 7 ,405, 436};
    int amount =8839;
    int result = 0;
    Solution sol;

    result = sol.coinChange(coins, amount);

    std::cout << result << "\n";
    return 0;
}