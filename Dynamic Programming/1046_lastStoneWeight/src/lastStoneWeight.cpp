#include <vector>
#include <set>
#include <algorithm>
#include "lastStoneWeight.h"


int Solution::lastStoneWeight(std::vector<int>& stones){
    std::set<int> stoneSet(stones.begin(), stones.end());

    for(std::set<int>::reverse_iterator it = stoneSet.rbegin(); stoneSet.size() > 1; it++){
        int prev_stone = *it;
        stoneSet.emplace(prev_stone - *(it++));
    }
    return *(stoneSet.begin());
}
