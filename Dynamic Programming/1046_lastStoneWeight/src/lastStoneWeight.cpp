#include <vector>
#include <set>
#include <algorithm>
#include "lastStoneWeight.h"


int Solution::lastStoneWeight(std::vector<int>& stones){
    std::set<int> stoneSet(stones.begin(), stones.end());
    int stone_1, stone_2;

    for(std::set<int>::reverse_iterator it = stoneSet.rbegin(); stoneSet.size() > 1; it++){
        stone_1 = *it;
        it++;
        stone_2 = *it;
        stoneSet.emplace(stone_1 - stone_2);
        it++;
        stoneSet.erase(stone_1);
        stoneSet.erase(stone_2);
    }
    if (!stoneSet.empty())
        return *(stoneSet.begin());
    else
        return 0;
}
