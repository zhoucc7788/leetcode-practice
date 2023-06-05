/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#define NULL nullptr

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(NULL) {}
};

#include <set>
#include <iostream>
#include <map>
//结论：用map和set没有差别
class Solution {
public:
    //ListNode* detectCycle(ListNode* head) {
    //    if (head == NULL) return NULL;
    //    ListNode* ptr = head;
    //    

    //    std::set <ListNode*> NodeSet;
    //    while (ptr->next != NULL) {
    //        std::set <ListNode*>::iterator it = NodeSet.find(ptr);
    //        
    //        if (it != NodeSet.end()) {
    //            return *it;
    //        }
    //        else {
    //            NodeSet.insert(ptr);
    //            ptr = ptr->next;
    //        }
    //    }

    //    return NULL;
    //}

    //ListNode* detectCycle(ListNode* head) {
    //    if (head == NULL) return NULL;

    //    std::set <ListNode*> NodeSet;
    //    while (head->next != NULL) {
    //        std::set <ListNode*>::iterator it = NodeSet.find(head);

    //        if (it != NodeSet.end()) {
    //            return *it;
    //        }
    //        else {
    //            NodeSet.insert(head);
    //            head = head->next;
    //        }
    //    }

    //    return NULL;
    //}
    ListNode* detectCycle(ListNode* head) {
        if (head == NULL) return NULL;
        std::map<ListNode*, int> NodeMap;
        
        while(head->next != NULL){ 
            std::map <ListNode*, int>::iterator it = NodeMap.find(head);
            if (it != NodeMap.end())
            {
                return (it->first);
            }
            else {
                NodeMap.emplace(head, head->val);
                head = head->next;
            }

        }
        
    }
};

int main() {
    ListNode* head = new ListNode(3), * _node, *cur = head;
    _node = new ListNode(2);
    cur->next = _node;
    cur = _node;

    _node = new ListNode(0);
    cur->next = _node;
    cur = _node;

    _node = new ListNode(-4);
    cur->next = _node;
    cur = _node;

    cur->next = head->next;

    ListNode* result;
    Solution s;
    result = s.detectCycle(head);
    
    if(result != NULL){ 
        std::cout << result->val << std::endl; 
    }
    else {
        std::cout << "No Cycle" << std::endl;
    }
        

    std::cin.get();
}