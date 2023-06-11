#include "auxiliary/RamDetect.h"
#include "auxiliary/Timer.h"
#include <string>
#include <memory>
#include <vector>
#include <algorithm>
#include <unordered_map>

//�����㷨���滮�Ƕ�̬�Ķ������ҵ����ظ��ĲŹ滮
class Solution {
public:

    int lengthOfLongestSubstring(std::string s) {
        int head = 0, tail = 0, result = 0;
        std::unordered_map<char, int> index_map = {};

        while (tail < s.size()) {
            if (index_map.find(s[tail]) != index_map.end()) {
                head = std::max(index_map[s[tail]], head);//���Ŀǰָ��������ĸ����һ�γ��ֵĵط�����head��˵��ʵ�����Ѿ��ظ��ˣ���head��λ�ø��£�����ѭ���ͻ����tail-head+1�Ľ��
            }

            result = std::max(result, tail - head + 1);//ÿ��ѭ�������жϣ�+1����Ϊ������λ�û���ҵ��ظ��ģ�������tailͣ�ڵ��ַ���ҲҪ���㵽���ظ��Ӵ������Ҳ�������Ϊ��Ϊ��������ѿ�ͷ���ȥ������Ҫ+1��
            index_map[s[tail]] = tail + 1;    //!!!��Ҫ����ÿ����ĸ��Ӧ��index�����������ַ������˳��+1���ô��������indexȥ�����ַ����պÿ�����������һλ \
                        ��head������������
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
//                strset.emplace_back(*ptr);   //���Ǹ㲻̫���push_back��emplace_back������
//                ptr++;
//            }
//            else {
//                if(strset.size() > maxLen) maxLen = strset.size();
//                ptr = head += std::distance(strset.begin(), find(*ptr))+1;    //�����������ƶ�����һ���ظ�����ĸ����һλ��\
//                distance���ص��൱��������Ԫ�ص���ŵĲ�����һ��Ԫ�غ͵�����Ԫ����ͻ��2���������ֻ��2��պõ������ظ����Ǹ���ĸ�ϣ���Ҫ���һλ�Ŷ�
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
//�������΢��һ���
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
    std::getline(std::cin, str); //��Ҫ��Ϊ�˽���ֻ��һ���ո������

    printf("%d", sol.lengthOfLongestSubstring(str));

    std::cin.get();

    return 0;
}