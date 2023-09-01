#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include "findTargetSumWays.h"

int main()
{
    std::vector<int> nums;
    std::string line;
    int result = 0;
    int target;
    int num;

    Solution sol;
    std::cout << "输入nums:";
    std::getline(std::cin, line);
    std::istringstream stream(line);
    while (stream >> num) {
        nums.emplace_back(int(num));  // 将读取的整数添加到vector中
    }


    std::cout << "输入target:";
    std::cin >> target;

    result = sol.findTargetSumWays(nums, target);

    std::cout << result << "\n";
    return 0;
}