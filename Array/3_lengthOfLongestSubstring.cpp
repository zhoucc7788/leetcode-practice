#include "auxiliary/RamDetect.h"
#include "auxiliary/Timer.h"
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <unordered_map>

//大佬算法，规划是动态的而不是找到了重复的才规划
class Solution {
public:

    int lengthOfLongestSubstring(std::string s) {
        int head = 0, tail = 0, result = 0;
        std::unordered_map<char, int> index_map = {};

        while (tail < s.size()) {
            if (index_map.find(s[tail]) != index_map.end()) {
                head = std::max(index_map[s[tail]], head);//如果目前指向的这个字母最新一次出现的地方大于head，说明实质上已经重复了，把head的位置更新，本次循环就会更新tail-head+1的结果
            }

            result = std::max(result, tail - head + 1);//每次循环都会判断，+1是因为假如这次还没有找到重复的，那现在tail停在的字符上也要被算到无重复子串长度里（也可以理解为因为减法不会把开头算进去所以需要+1）
            index_map[s[tail]] = tail + 1;    //!!!重要的是每个字母对应的index在是它们在字符串里的顺序+1，好处是以这个index去索引字符串刚好可以索引到下一位 \
                        而head是正常的索引
            tail++;
        }

        return result;
    }
};
//class Solution {
//public:  
//
//    std::vector<char> strset = {};
//
//    int lengthOfLongestSubstring(std::string s) {
//
//        std::string::iterator head = s.begin();
//        std::string::iterator ptr = head;
//        int maxLen = 0;
//        
//        while (ptr != s.end()) {
//            if (find(*ptr) == strset.end()){
//                strset.emplace_back(*ptr);   //还是搞不太清楚push_back和emplace_back的区别
//                ptr++;
//            }
//            else {
//                if(strset.size() > maxLen) maxLen = strset.size();
//                ptr = head += std::distance(strset.begin(), find(*ptr))+1;    //迭代器往后移动到第一个重复的字母的下一位，\
//                distance返回的相当于是两个元素的序号的差，比如第一个元素和第三个元素里就会差2，所以如果只加2会刚好到出现重复的那个字母上，还要向后一位才对
//                strset.clear();
//            }
//        }
//
//        if (strset.size() > maxLen) maxLen = strset.size();
//        return maxLen;
//    }
//
//    std::vector<char>::iterator find(char element) 
//    {
//        std::vector<char>::iterator  it = strset.begin();
//        
//        while (it != strset.end()) {
//            if (*it == element) {
//                return it;
//            }
//            else {
//                it++;
//            }
//        }
//        return strset.end();
//    }
//
//};
//这个会稍微慢一点点
//class Solution {
//public:
//
//    std::vector<char> strset = {};
//
//    int lengthOfLongestSubstring(std::string s) {
//
//        std::string::iterator head = s.begin();
//        std::string::iterator ptr = head;
//        int maxLen = 0;
//
//        while (ptr != s.end()) {
//            if (!find(*ptr)) {
//                strset.emplace_back(*ptr);
//                ptr++;
//            }
//            else {
//                if (strset.size() > maxLen) maxLen = strset.size();
//                ptr = head += find(*ptr);
//                strset.clear();
//            }
//        }
//
//        if (strset.size() > maxLen) maxLen = strset.size();
//        return maxLen;
//    }
//
//    int find(char element) {
//        std::vector<char>::iterator  it = strset.begin();
//        int index = 0;
//        while (it != strset.end()) {
//            if (*it == element) {
//                return 1;
//            }
//            else {
//                //printf("current it: %c\n", *it);
//                it++;
//                index++;
//            }
//        }
//        return 0;
//    }
//};

int main() {
    std::string str;
    Solution sol;

    std::cout << "string?: ";
    std::getline(std::cin, str); //主要是为了接受只有一个空格的输入

    printf("%d", sol.lengthOfLongestSubstring(str));

    std::cin.get();

    return 0;
}