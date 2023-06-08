#include <iostream>
#include "RamDetect.h"
#include "Timer.h"


////直接递归：非常慢
//class Solution {
//public:
//
//    static AllocationMetrics s_AllocationMetrics;
//
//    static int fib(int n) {
//        
//        int result = 0;
//        
//        result = cal(n) % 1000000007;
//        
//        return result;
//    }
//
//    static int cal(int n)
//    {
//        int result = 0;
//        if (n == 1 || n == 0) {
//
//            result = n;
//
//        }
//        else {
//
//            result = cal(n - 1) + cal(n - 2);
//
//        }
//
//        return result;
//    }
//
//};

//class Solution {
//public:
//
//    static AllocationMetrics s_AllocationMetrics;
//
//    int fib(int n) {
//        
//        std::shared_ptr<int> result = std::make_shared<int>();
//
//        *result = cal(n, result) % 1000000007;
//
//         
//        return *result;
//    }
//
//    int cal(const int& n, std::shared_ptr<int> result)
//    {
// 
//        if (n == 1 || n == 0) {
//
//            *result = n;
//
//        }
//        else {
//
//            *result = cal(n - 1, result) + cal(n - 2, result);
//
//        }
//
//        return *result;
//    }
//
//};
//对链表有独特的痴迷，不过并无意义
class Solution {
public:
    struct ListNode {
        std::shared_ptr<struct ListNode> next;
        long long value = 0;
    } ListNode;

    //static AllocationMetrics s_AllocationMetrics;

    static int fib(int n) {

        std::shared_ptr<struct ListNode> node_1 = std::make_shared<struct ListNode>();  //后面这个括号里应该填的是如果有构造函数情况下的参数
        std::shared_ptr<struct ListNode> node_2 = std::make_shared<struct ListNode>();//前半部分是声明指针类型，后半部分是生成这个指针本身，后半部分其实就是malloc语句
	//根据VS的提示，class中声明为static的数据是不可以在类中直接初始化的

        node_1->value = 0;
        node_1->next = node_2;
        node_2->value = 1;
        node_2->next = node_1;
        std::shared_ptr<struct ListNode> _node = node_1;

        for (n; n > 0; n--) {
            _node->value = (_node->value + _node->next->value) % 1000000007;
            _node = _node->next;
        }
        return _node->value;
    }
};

//int main()
//{
//    int i = 0;
//    Solution* sol = new Solution;
//    std::cout << "n: ";
//    std::cin >> i;
//
//    std::cout << sol->fib(i) << std::endl;
//    std::cin.get();
//
//    return 0;
//}