#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

int kthSmallest(TreeNode* root, int k){
    stack<TreeNode*>s;
    TreeNode* curr = root;
    while(curr||!s.empty()){
        while(curr){
            s.push(curr);
            curr=curr->left;
        }
        curr = s.top();
        s.pop();
        k--;
        if(!k)return curr->val;
        curr=curr->right;
    }
    return -1;
}

int main(){

}