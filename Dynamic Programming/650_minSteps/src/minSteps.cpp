#include <algorithm>
#include <vector>
#include <set>
#include <iostream>
#include "minSteps.h"

int Solution::minSteps(int n){
    std::vector<int> steps(n + 1, 0);

    for(int i = 2; i <= n; i++) steps[i] = i;

    for(int i = 1; i <= n; i++){
        for(int j = 2; j <= (i/2 + 1); j++){
            if(i % j == 0){
                steps[i] = std::min(steps[i], steps[j] + i/j); //比如2到8,应该是粘贴三次，加上一个复制操作，就是四次，刚好就是8/4
            } else {

            }
        }
    }

    return steps[n];
}