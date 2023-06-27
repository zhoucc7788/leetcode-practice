#include <iostream>
#include <string>

// class Solution;
class Solution
{
public:
    bool isValid(std::string s);//对于方法的声明不可以删除，整个声明只是一个接口，如果不写清楚的话编译器不知道这个类能干什么。
};

int main()
{
    std::string str;
    int result = 0;
    Solution sol;

    std::getline(std::cin, str);
    result = sol.isValid(str);

    std::cout << result << "\n";
    return 0;
}