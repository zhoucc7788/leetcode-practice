#include <memory>
#include <algorithm>
#include "addTwoNumbers.h"

//layback的这个变量很没有必要,题解大神直接在进位变量上加减比这个方法好很多
ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2)
{
    int digit = 0;
    int march = 0;
    ListNode *result = new ListNode();
    ListNode *cur = result;
    ListNode *cur_layback = cur;

    while (l1 != nullptr || l2 != nullptr)
    {

        digit = ((l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0) + march) % 10;
        march = ((l1 != nullptr ? l1->val : 0) + (l2 != nullptr ? l2->val : 0) + march) / 10;
        cur->val = digit;
        cur->next = new ListNode();
        if (l1 != nullptr)
            l1 = l1->next == nullptr ? nullptr : l1->next;
        if (l2 != nullptr)
            l2 = l2->next == nullptr ? nullptr : l2->next;
        cur_layback = cur;
        cur = cur->next;
    }

    if (march == 1)
        cur->val = 1;
    else
        cur_layback->next = nullptr;//这里写cur = nullptr是没有用的，因为需要的是上一个指针的next指向空地址

    return result;
}