#include <vector>
#include <set>
#include <memory>
#include <algorithm>
#include "coinChange.h"

int Solution::coinChange(std::vector<int> &coins, int amount)
{
    if (amount == 0)
        return 0;

    std::set<int> coinset(coins.begin(), coins.end());
    std::shared_ptr<std::vector<int>> step = std::make_shared<std::vector<int>>(amount + 1, amount + 1); // amount+1个位置,第一个位置初始化为0，每个位置都初始化为amount+1,只要没有走到的位置都会是amount+1
    step->at(0) = 0;

    for (int j = *(coinset.begin()); j <= amount; j++)
    {
        for (int i : coinset)
        {
            if (i <= j)
            {
                step->at(j) = std::min(step->at(j), step->at(j - i) + 1); // 最后没有新的值的话就是找不到？
            }
        }
    }

    if (step->at(amount) != amount + 1)
        return step->at(amount);
    else
        return -1;
}
