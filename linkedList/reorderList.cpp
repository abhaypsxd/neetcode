#include <bits/stdc++.h>
using namespace std;
#include "classNode.h"

ListNode* reverseList(ListNode* head){
    ListNode* prev = nullptr;
    ListNode* curr = head;
    while(curr->next){
        ListNode* tmp = curr->next;
        curr->next=prev;
        prev=curr;
        curr=tmp;
    }
    curr->next=prev;
    return curr;
}

void reorderList(ListNode* head){
    if(!head||!head->next)return;
    ListNode* slow = head;
    ListNode* fast = head->next;
    while(fast&&fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    ListNode* list2 = slow->next;
    slow->next=nullptr;
    ListNode* list1 = head;
    list2 = reverseList(list2);
    while(list2){
        ListNode* tmp1 = list1->next;
        ListNode* tmp2 = list2->next;
        list1->next=list2;
        list2->next=tmp1;
        list1 = tmp1;
        list2 = tmp2;
    }
    cout<<"LIST1:"<<endl;
    ListNode* it = head;
    while(it){
        cout<<it->val<<endl;
        it=it->next;
    }
    // cout<<"LIST2:"<<endl;
    // it = list2;
    // while(it){
    //     cout<<it->val<<endl;
    //     it=it->next;
    // }
}

int main(){
    vector<int>arr = {1};
    ListNode* head = new ListNode(arr[0]);
    ListNode* tail = head;
    for(int i = 1; i<arr.size(); i++){
        tail->next = new ListNode(arr[i]);
        tail = tail->next;
    }

    reorderList(head);
}