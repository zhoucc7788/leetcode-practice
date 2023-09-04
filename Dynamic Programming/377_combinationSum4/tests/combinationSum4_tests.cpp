#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include "combinationSum4.h"

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

    while(std::getline(stream, line, ',')){
        std::istringstream converter(line);

        if(converter >> num){
            nums.emplace_back(int(num));
        }

    }

    std::cout << "输入target:";
    std::cin >> target;

    result = sol.combinationSum4(nums, target);

    std::cout << result << "\n";
    return 0;
}