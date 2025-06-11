#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

int dfs(TreeNode* root, int&res){
    if(!root)return -1;
    int left = dfs(root->left,res);
    int right = dfs(root->right,res);
    res=2+left+right;
    return 1+max(left,right);
}

int diameterOfBinaryTree(TreeNode* root){
    int res = 0;
    dfs(root,res);
    return res;
}

int main(){

}