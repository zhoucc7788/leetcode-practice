#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include "canPartition.h"

int main()
{
    std::vector<int> nums;
    std::string line;
    bool result = 0;
    int num;

    Solution sol;
    std::cout << "输入nums:";
    std::getline(std::cin, line);
    std::istringstream stream(line);
    while (stream >> num) {
        nums.emplace_back(int(num));  // 将读取的整数添加到vector中
    }

    result = sol.canPartition(nums);

    std::cout << result << "\n";
    return 0;
}