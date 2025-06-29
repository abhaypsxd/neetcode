#ifndef LISTNODE_H
#define LISTNODE_H


struct ListNode{
    int val;
    ListNode* next;
    ListNode(){
        val = 0;
        next = nullptr;
    }
    ListNode(int x){
        val = x;
        next = nullptr;
    }
    ListNode(int x, ListNode* node){
        val = x;
        next = node;
    }
};

#endif 