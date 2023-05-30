/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

typedef struct ListNode ListNode;
typedef struct HashNode {
	uint32_t key;
	struct ListNode* l_node;
	struct HashNode* next;
} HashNode;

typedef struct HashList {
	int count;
	struct HashNode* head;
	struct HashNode* tail;
} HashList;

bool hasCycle(struct ListNode *head);

struct HashList* ListCreate();

struct HashNode* NodeCreate(ListNode* _node);

uint32_t mod_hash(int val);

void NodeAppend(HashList** HashLists, HashNode* h_node);

bool NodeSearch(HashList** HashLists, HashNode* h_node);//暂定直接返回是否有搜索结果的bool值，但现在还不太确定要怎么找

bool hasCycle(struct ListNode *head) {
	
	struct HashList* HashLists[100] = {NULL};
	struct ListNode* _node = NULL;
	struct HashNode* h_node = NULL;
	bool cycle = false;

	for(_node = head; _node != NULL; _node = _node->next){
		h_node = NodeCreate(_node);
		cycle = NodeSearch(HashLists, h_node);
		if(cycle == true){	
			return cycle;
		} else {
			NodeAppend(HashLists, h_node);
		}
	}   
	
	return cycle; 
}

struct HashList* ListCreate(){
	
	struct HashList* h_list = calloc(1, sizeof(struct HashNode));
	h_list->count = 0;
	h_list->head = NULL;
	h_list->tail = NULL;

	return h_list;

}

struct HashNode* NodeCreate(ListNode* _node){
	
	struct HashNode* h_node = calloc(1, sizeof(struct HashNode));
	h_node->l_node = _node;
	h_node->key = mod_hash(_node->val);
	h_node->next = NULL;

	return h_node;
}

uint32_t mod_hash(int val){

	int remainder;
	remainder = abs(val % 99);
	
	return remainder;	
}

bool NodeSearch(HashList** HashLists, HashNode* h_node){
	
	HashNode* cur = NULL;
	if(HashLists[h_node->key] == NULL){
		return false;
	}else{
		for(cur = HashLists[h_node->key]->head; cur != NULL; cur = cur->next){
			if(&(*(cur->l_node)) == &(*(h_node->l_node))){
				return true;
			}	
		}
	}

	return false;
}

void NodeAppend(HashList** HashLists, HashNode* h_node){
	
	if(HashLists[h_node->key] == NULL){
		HashLists[h_node->key] = ListCreate();
		HashLists[h_node->key]->head = h_node;
		HashLists[h_node->key]->tail = h_node;
		HashLists[h_node->key]->count = 1;  
	}else{
		HashLists[h_node->key]->tail->next = h_node;
		HashLists[h_node->key]->tail = h_node;  	
		HashLists[h_node->key]->count++; 	
	}

	return 0;
}