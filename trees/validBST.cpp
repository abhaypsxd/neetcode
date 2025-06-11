#include <bits/stdc++.h>
#include "treeNode.h"
using namespace std;

bool isBST(TreeNode* root, int minVal, int maxVal){
    if(!root)return true;
    if(root->val<=minVal||root->val>=maxVal)return false;
    return isBST(root->left,minVal,root->val)&&isBST(root->right,root->val,maxVal);
}

bool isValidBST(TreeNode* root){
    return isBST(root, INT_MIN, INT_MAX);
}

int main(){

}