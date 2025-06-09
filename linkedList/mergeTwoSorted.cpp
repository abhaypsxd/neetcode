#include <bits/stdc++.h>
#include "classNode.h";
using namespace std;

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2){
    if(!list1)return list2;
    if(!list2)return list1;
    ListNode* head;
    if(list1->val<list2->val){
        head = list1;
        list1=list1->next;
    }
    else{
        head = list2;
        list2=list2->next;
    }
    ListNode* it = head;
    while(list1&&list2){
        if(list1->val<list2->val){
            head->next = list1;
            list1 = list1->next;
        }
        else{
            head->next = list2;
            list2 = list2->next;
        }
        head=head->next;
    }
    if(list1)head->next=list1;
    if(list2)head->next=list2;
    return it;
}

int main(){

}