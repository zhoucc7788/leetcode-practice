#include <vector>
#include <iostream>
#include <string>
#include <sstream>
#include "change.h"

int main()
{
    std::vector<int> coins;
    std::string line;
    int result = 0;
    int amount;
    int coin;

    Solution sol;
    std::cout << "输入coins:";

    std::getline(std::cin, line);//使用 std::getline 函数从 std::cin 输入流中读取一行数据到 line 字符串变量中
    std::istringstream stream(line);//使用 std::istringstream 创建一个输入流对象 stream，并传递向其传递已经读取的字符串 line
    while (std::getline(stream, line, ',')) {  // 使用逗号分割输入值
        std::istringstream converter(line);//到这一步的时候converter对象里存的就是分割后的每个输入值了
        if (converter >> coin) {
            coins.emplace_back(coin);  // 将读取的整数添加到vector中
        }
    }
    
    //为什么下面这个省略前两步的办法不对-因为getline的默认分割符是换行符，而std::cin的通常也是以换行符结束，如果一开始就把分隔符设置为逗号，会导致读取不会结束
    // while (std::getline(std::cin, line, ',')) {  // 使用逗号分割输入值
    //     std::istringstream converter(line);//到这一步的时候converter对象里存的就是分割后的每个输入值了
    //     if (converter >> coin) {
    //         coins.emplace_back(coin);  // 将读取的整数添加到vector中
    //     }
    // }

    std::cout << "输入amount:";
    std::cin >> amount;

    result = sol.change(amount, coins);

    std::cout << result << "\n";
    return 0;
}