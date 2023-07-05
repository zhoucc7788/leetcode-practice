#include <memory>
#include <algorithm>
#include "addTwoNumbers.h"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2){
    int march = 0;
    std::shared_ptr<ListNode> result = std::make_shared<ListNode>();
    std::shared_ptr<ListNode> cur = result;
    
   while (l1 != nullptr || l2 != nullptr){

        result->next =std::make_shared
        
        
        l1 = l1->next == nullptr ? nullptr : l1->next;
        l2 = l2->next == nullptr ? nullptr : l2->next;
    }
}