#include <vector>
#include <set>
#include <algorithm>
#include "lastStoneWeight.h"


int Solution::lastStoneWeight(std::vector<int>& stones){
    std::sort(stones.begin(), stones.end());
    int stone_1, stone_2;

    while(stones.size() > 1){
        std::sort(stones.begin(), stones.end());
        std::vector<int>::reverse_iterator it =stones.rbegin();
        stone_1 = *it;
        it++;
        stone_2 = *it;
        stones.pop_back();
        stones.pop_back();
        stones.push_back(stone_1 - stone_2);
    }

    if (!stones.empty())
        return *(stones.begin());
    else
        return 0;
}
