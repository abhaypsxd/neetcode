#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

void dfs(TreeNode* root, int currMax, int&cnt){
    if(!root)return;
    if(root->val>currMax)cnt++;
    currMax=max(currMax,root->val);
    dfs(root->left,currMax,cnt);
    dfs(root->right,currMax,cnt);

}

int goodNodes(TreeNode* root){
    int currMax = root->val;
    int cnt = 0;
    dfs(root,currMax,cnt);
    return cnt;
}

int main(){

}