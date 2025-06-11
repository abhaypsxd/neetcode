#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;



bool isSameTree(TreeNode* p, TreeNode* q){
    if(!p&&!q)return true;
    if(!p||!q)return false;
    if(p->val!=q->val)return false;
    return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
}

bool isSubtree(TreeNode* root, TreeNode* subRoot){
    if(!root&&!subRoot)return true;
    if(!root&&subRoot)return false;
    if(root&&!subRoot)return true;
    if(isSameTree(root,subRoot))return true;
    return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
}

int main(){

}