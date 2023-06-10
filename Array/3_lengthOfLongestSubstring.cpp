#include "auxiliary/RamDetect.h"
#include "auxiliary/Timer.h"
#include <string>
#include <memory>
#include <vector>
#include <sstream>
#include <algorithm>

class Solution {
public:  

    std::vector<char> strset = {};

    int lengthOfLongestSubstring(std::string s) {

        std::string::iterator head = s.begin();
        std::string::iterator ptr = head;
        int maxLen = 0;
        
        while (ptr != s.end()) {
            if (find(*ptr) == strset.end()){
                strset.emplace_back(*ptr);   //还是搞不太清楚push_back和emplace_back的区别
                ptr++;
            }
            else {
                if(strset.size() > maxLen) maxLen = strset.size();
                ptr = head += std::distance(strset.begin(), find(*ptr))+1;    //迭代器往后移动到第一个重复的字母的下一位，\
                distance返回的相当于是两个元素的序号的差，比如第一个元素和第三个元素里就会差2，所以如果只加2会刚好到出现重复的那个字母上，还要向后一位才对
                strset.clear();
            }
        }

        if (strset.size() > maxLen) maxLen = strset.size();
        return maxLen;
    }

    std::vector<char>::iterator find(char element) 
    {
        std::vector<char>::iterator  it = strset.begin();
        
        while (it != strset.end()) {
            if (*it == element) {
                return it;
            }
            else {
                it++;
            }
        }
        return strset.end();
    }

};
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