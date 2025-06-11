#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

int maxStraightSum(TreeNode* root, int&currMax){
    if(!root)return 0;
    int a = max(0,maxStraightSum(root->left, currMax));
    int b = max(0,maxStraightSum(root->right, currMax));
    currMax=max(currMax,root->val+a+b);
    return root->val+max(a,b);
}

int maxPathSum(TreeNode* root){
    int currMax = INT_MIN;
    maxStraightSum(root,currMax);
    return currMax;
}

int main(){

}