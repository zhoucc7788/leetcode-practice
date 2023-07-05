#include <iostream>
#include <string>
#include <vector>
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
        line[i] = new ListNode(int(s));
        i++;
    }

    while(i > 0){
        line[i]->next = line[i];
        i--;
    }
    l1 = line.back();
    for(ListNode* element : line) free(element);

        for (char s : num2){
        line[i] = new ListNode(int(s));
        i++;
    }

    while(i > 0){
        line[i]->next = line[i];
        i--;
    }
    
    l2 = line.back();
    for(ListNode* element : line) free(element);

    result = sol.addTwoNumbers(l1, l2);

    std::cout << result << "\n";
    return 0;
}