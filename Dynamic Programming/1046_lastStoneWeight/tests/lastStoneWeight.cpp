#include <vector>
#include <iostream>
#include "lastStoneWeight.h"

int main()
{
    int n;
    int result = 0;
    Solution sol;
    std::cout << "输入Stones:";
    std::cin >> n;

    result = sol.numSquares(n);

    std::cout << result << "\n";
    return 0;
}