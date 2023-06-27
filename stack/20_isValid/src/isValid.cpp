#include <string>
#include <algorithm>
#include <set>
#include <stack>

class Solution
{
public:
    bool isValid(std::string s);
};

bool Solution::isValid(std::string s)
{
    if (s.length() % 2 != 0)
        return 0;

    std::set<char> front = {'{', '[', '('};

    // bool result = false;
    std::stack<char> bracketstack;
    std::string::iterator it = s.begin();


    for (it = s.begin(); it != s.end(); it++)
    {
        if (front.count(*it))
        {
            bracketstack.push(*it);
        }
        else
        {
            if (bracketstack.empty())
                return 0;
            else if (abs(bracketstack.top() - *it) > 2)
                return 0;
            else
                bracketstack.pop();
        }
    }
    if (bracketstack.empty())
        return 1;
    else
        return 0;
}
