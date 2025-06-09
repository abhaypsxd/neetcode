#include <bits/stdc++.h>
using namespace std;

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
    ListNode(int x, ListNode* nxt){
        val = x;
        next = nxt;
    }
};

ListNode* reverseList(ListNode* head){
    if(!head||!head->next)return head;
    ListNode* prev = nullptr;
    ListNode* nxt = head->next;
    ListNode* curr = head;
    while(curr->next){
        curr->next=prev;
        prev = curr;
        curr = nxt;
        nxt = nxt->next;
    }
    return curr;
}

int main(){

}