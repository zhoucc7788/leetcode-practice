#include "mincostTickets.h"
#include <vector>
#include <algorithm>
#include <memory>
#include <set>

int Solution::mincostTickets(std::vector<int> &days, std::vector<int> &costs)
{

    if (days.size() == 0)
        return 0;

    std::set<int> dayset(days.begin(), days.end());
    std::vector<int> day365;
    day365.resize(366, days.size() * costs[2]); // 初始化的思路是假设所有要旅行的时候都支付最高的那个价格，累计价格是不可能高于这个水平的
    day365[0] = 0;

    for (int i = 1; i < *(dayset.end()); i++)
    { // 明天再想想，这个只是确认i日是旅游日的情况，而且还没对，还要初始化第一天
        if (dayset.count(i))
        {
            day365[i] = tripleMin(day365[i - 1] + costs[0], (i < 7 ? day365[0] : day365[i - 7]) + costs[1], (i < 30 ? day365[0] : day365[i - 30]) + costs[2]);
        } else {
            day365[i] = day365[i - 1];
        }
    }

    return day365[*(dayset.end())];
}

template <typename... Args> // 函数模板的声明加上这行才是完整的
int tripleMin(int arg, Args... args)
{
    return std::min(tripleMin(args...), arg);
}

template <>
int tripleMin(int arg)
{
    return arg;
}