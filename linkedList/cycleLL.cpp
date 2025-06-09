#include <bits/stdc++.h>
using namespace std;
#include "classNode.h"

bool hasCycle(ListNode* head){
    if(!head&&!head->next)return false;
    ListNode* fast = head;
    ListNode* slow = head;
    while(fast!=slow){
        if(!fast->next||!fast->next->next)return false;
        fast=fast->next->next;
        slow=slow->next;
    }
    return true;
}

int main(){

}