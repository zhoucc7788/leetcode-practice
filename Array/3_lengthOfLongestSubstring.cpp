#include "auxiliary/RamDetect.h"
#include "auxiliary/Timer.h"
#include <string>
#include <memory>
#include <vector>
#include <sstream>
#include <algorithm>

//���������𰸵ĸĽ�˼·��ʵʱ�洢ÿ�����ֹ�����ĸ��һ�γ��ֵ�λ�ã������Ƿ������ظ����ٻ�ȥ�ҡ�
//�ù�ϣ�����洢�Ѿ����ֹ����ַ���Ȼ���ַ���Ϊ�����ַ���һ�γ��ֵ�λ����Ϊֵ���ܻ����
//��õľ��ǲ���Ҫ���Ƴ�һ���Ӵ���Ȼ��ͣ��������գ����������������ʶ��ʼλ����ֹλ����
class Solution {
public:  

    std::vector<char> strset = {};

    int lengthOfLongestSubstring(std::string s) {

        std::string::iterator head = s.begin();
        std::string::iterator ptr = head;
        int maxLen = 0;
        
        while (ptr != s.end()) {
            if (find(*ptr) == strset.end()){
                strset.emplace_back(*ptr);   //���Ǹ㲻̫���push_back��emplace_back������
                ptr++;
            }
            else {
                if(strset.size() > maxLen) maxLen = strset.size();
                ptr = head += std::distance(strset.begin(), find(*ptr))+1;    //�����������ƶ�����һ���ظ�����ĸ����һλ��\
                distance���ص��൱��������Ԫ�ص���ŵĲ�����һ��Ԫ�غ͵�����Ԫ����ͻ��2���������ֻ��2��պõ������ظ����Ǹ���ĸ�ϣ���Ҫ���һλ�Ŷ�
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