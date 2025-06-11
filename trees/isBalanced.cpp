#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

int dfs(TreeNode* root, bool&res){
    if(!root)return -1;
    int left = dfs(root->left,res);
    int right = dfs(root->right,res);
    if(abs(left-right)>1)res=false;
    return 1+max(left,right);
}

bool isBalanced(TreeNode* root){
    bool res = true;
    dfs(root,res);
    return res;
}

int main(){

}