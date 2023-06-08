#include <iostream>
#include "RamDetect.h"
#include "Timer.h"


////ֱ�ӵݹ飺�ǳ���
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
//�������ж��صĳ��ԣ�������������
class Solution {
public:
    struct ListNode {
        std::shared_ptr<struct ListNode> next;
        long long value = 0;
    } ListNode;

    //static AllocationMetrics s_AllocationMetrics;

    static int fib(int n) {

        std::shared_ptr<struct ListNode> node_1 = std::make_shared<struct ListNode>();  //�������������Ӧ�����������й��캯������µĲ���
        std::shared_ptr<struct ListNode> node_2 = std::make_shared<struct ListNode>();//ǰ�벿��������ָ�����ͣ���벿�����������ָ�뱾����벿����ʵ����malloc���
	//����VS����ʾ��class������Ϊstatic�������ǲ�����������ֱ�ӳ�ʼ����

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