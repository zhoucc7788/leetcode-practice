#include <iostream>
#include <string>
#include "addTwoNumbers.h"

int main()
{
    std::vector<int> days = {1,4,6,7,8,20};
    std::vector<int> costs = {2,7,15};
    int result = 0;
    Solution sol;

    result = sol.mincostTickets(days, costs);

    std::cout << result << "\n";
    return 0;
}