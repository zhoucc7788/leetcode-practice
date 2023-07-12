#include <iostream>
#include "numSquares.h"

int main()
{
    int n;
    int result = 0;
    Solution sol;
    std::cout << "输入n:";
    std::cin >> n;

    result = sol.numSquares(n);

    std::cout << result << "\n";
    return 0;
}