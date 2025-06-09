#include <bits/stdc++.h>
#include "classNode.h"
using namespace std;

int getSize(ListNode* head){
    int n = 0;
    while(head){
        n++;
        head = head->next;
    }
    return n;
}

void padWithZeroes(ListNode* l1, ListNode* l2){
    while(l1->next){
        if(l2->next)l2 = l2->next;
        else{
            l2->next = new ListNode(0);
            l2 = l2->next;
        }
        l1 = l1->next;
    }
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
    if(getSize(l1)>getSize(l2)){
        padWithZeroes(l1,l2);
    }
    else padWithZeroes(l2,l1);
    // ListNode* it = l2;
    // while(it){
    //     cout<<it->val<<" ";
    //     it=it->next;
    // }
    // it = l1;
    // cout<<endl;
    // while(it){
    //     cout<<it->val<<" ";
    //     it = it->next;
    // }
    // cout<<endl;


    // l1 = reverseList(l1);
    // l2 = reverseList(l2);
    ListNode* head = l1;
    bool carry = false;
    while(l1){
        int sum = l1->val+l2->val;
        if(carry)sum++;
        
        if(sum>9){
            l1->val = (sum-10);
            carry = true;
        }
        else{
            l1->val=sum;
            carry = false;
        }
        l1=l1->next;
        l2 = l2->next;
    }
    
    

    // while(head){
    //     cout<<head->val<<" ";
    //     head=head->next;
    // }
    // cout<<endl;

    // while(l2){
    //     cout<<l2->val<<" ";
    //     l2=l2->next;
    // }
    // cout<<endl;
    return head;
}

int main(){
    vector<int>arr = {1,2,8,4,5};
    vector<int>arr2 = {2,3,4};
    ListNode* head = new ListNode(arr[0]);
    ListNode* head2 = new ListNode(arr2[0]);

    ListNode* tail = head;
    for(int i = 1; i<arr.size(); i++){
        tail->next = new ListNode(arr[i]);
        tail = tail->next;
    }

    tail = head2;
    for(int i = 1; i<arr2.size(); i++){
        tail->next = new ListNode(arr2[i]);
        tail = tail->next;
    }

    ListNode* added = addTwoNumbers(head,head2);
}