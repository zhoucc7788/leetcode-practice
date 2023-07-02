#include <vector>
#include <algorithm>
#include <memory>
#include <set>

class Solution {
public:
    int mincostTickets(std::vector<int>& days, std::vector<int>& costs);
};

template <typename... Args> // 函数模板的声明加上这行才是完整的
int tripleMin(int arg, Args... args);

template <>
int tripleMin(int arg);