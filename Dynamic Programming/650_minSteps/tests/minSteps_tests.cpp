#include <iostream>
#include "minSteps.h"

int main()
{
    int n;
    int result = 0;
    Solution sol;
    std::cout << "输入步骤数量:";
    std::cin >> n;

    result = sol.minSteps(n);

    std::cout << result << "\n";
    return 0;
}