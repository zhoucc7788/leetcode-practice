#include <memory>
#include <algorithm>
#include "addTwoNumbers.h"

ListNode* Solution::addTwoNumbers(ListNode* l1, ListNode* l2){
    int digit = 0;
    int march = 0;
    ListNode* result = new ListNode();
    ListNode* cur = result;
    
   while (l1 != nullptr || l2 != nullptr){

        digit = ((l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0) + march) % 10;
        march = ((l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0) + march) / 10;
        cur->val = digit;
        cur->next = new ListNode();        
        l1 = l1->next == nullptr ? nullptr : l1->next;
        l2 = l2->next == nullptr ? nullptr : l2->next;
        march = 0;
    }

    return result;
}