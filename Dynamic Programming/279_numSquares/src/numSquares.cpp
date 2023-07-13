#include <set>
#include <vector>
#include <algorithm>
#include <utility>
#include "numSquares.h"


int Solution::numSquares(int n){
    
    std::vector<int> minSquaresnum(n + 1, n*n);
    std::set<std::pair<int, int>> pairSet;

    for(int i = 1; i*i <= n; i++){
        pairSet.emplace(std::make_pair(i, i*i));
        minSquaresnum[i*i] = 1;
    }

    for(int i = 1; i <= n; i++){
        for (std::pair<int, int> pair : pairSet){ 
            if (pair.second <= i)
                minSquaresnum[i] = std::min(minSquaresnum[i - pair.second] + minSquaresnum[pair.second], minSquaresnum[i]);
            else break;
        }        
    }

    return minSquaresnum[n];
}