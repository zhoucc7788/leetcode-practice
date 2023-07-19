#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include "lastStoneWeight.h"

int main()
{
    std::vector<int> stones;
    std::string line;
    int result = 0;
    int stone;

    Solution sol;
    std::cout << "输入Stones:";
    std::getline(std::cin, line);
    std::istringstream stream(line);
    while (stream >> stone) {
        stones.emplace_back(int(stone));  // 将读取的整数添加到vector中
    }

    printf("\n");
    for(int stone : stones){
        std::cout<< stone <<std::endl;
    }    

    result = sol.lastStoneWeight(stones);

    std::cout << result << "\n";
    return 0;
}