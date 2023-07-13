#include <set>
#include <vector>
#include <algorithm>
#include <cmath>
#include "numSquares.h"


int Solution::numSquares(int n){
    
    std::vector<int> minSquaresnum(n + 1, n*n);

    for(int i = 1; i*i <= n; i++){
        minSquaresnum[i*i] = 1;
    }

    for(int i = 1; i <= n; i++){
        for (int j = i; j > 0; j--){ 
            if((minSquaresnum[i - j] < minSquaresnum[i]) && (minSquaresnum[j] < minSquaresnum[i]))
                minSquaresnum[i] = std::min(minSquaresnum[i - j] + minSquaresnum[j], minSquaresnum[i]);
        }        
    }

    return minSquaresnum[n];
}