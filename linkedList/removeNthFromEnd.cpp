#include <bits/stdc++.h>
using namespace std;
#include "classNode.h"

ListNode* removeNthFromEnd(ListNode* head, int n){
    if(!head||!head->next)return nullptr;
    ListNode* first = head;
    ListNode* second = head;
    while(n--){
        second=second->next;
    }
    if(!second)return head->next;
    while(second->next){
        first=first->next;
        second=second->next;
    }
    second = first->next->next;
    ListNode* tmp = first->next;
    first->next=second;
    delete tmp;
    return head;
}

int main(){

}