#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include "addTwoNumbers.h"


int main()
{   
    std::string num1;
    std::string num2;

    ListNode* l1 = new ListNode();
    ListNode* l2 = new ListNode();
    ListNode* result = 0;
    int i = 0;
    Solution sol;

    std::cout << "请输入第一个整数：";
    std::cin >> num1;

    std::cout << "请输入第二个整数：";
    std::cin >> num2;

    std::vector<ListNode*> line(num1.length(), nullptr);
    for (char s : num1){
        line[i] = new ListNode(std::atoi(&s));
        i++;
    }

    while(i > 0){
        i--;
        line[i]->next = line[i - 1];
    }
    l1 = line.back();
    
    i=0;
    line.resize(num2.length(), nullptr);

    for (char s : num2){
        line[i] = new ListNode(std::atoi(&s));
        i++;
    }

    while(i > 0){
        i--;
        line[i]->next = line[i - 1];
    }
    
    l2 = line.back();

    result = sol.addTwoNumbers(l1, l2);


    std::cout << result << "\n";
    return 0;
}