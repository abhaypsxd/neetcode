#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

TreeNode* invertTree(TreeNode* root){
    if(!root)return root;
    queue<TreeNode*>q;
    q.push(root);
    while(q.size()){
        TreeNode* curr = q.front();
        q.pop();
        if(curr->left)q.push(curr->left);
        if(curr->right)q.push(curr->right);
        TreeNode* tmp = curr->left;
        curr->left=curr->right;
        curr->right=tmp;
    }
    return root;
}

int main(){

}