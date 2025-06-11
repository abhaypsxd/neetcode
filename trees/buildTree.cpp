#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;


TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder){
    if(!preorder.size()||!inorder.size())return nullptr;
    TreeNode* root = new TreeNode(preorder[0]);
    unordered_map<int,int>mpp;
    for(int i = 0; i<inorder.size(); i++){
        mpp[inorder[i]]=i;
    }
    int mid = mpp[preorder[0]];
    vector<int>leftPreorder;
    vector<int>leftInorder;
    vector<int>rightPreorder;
    vector<int>rightInorder;
    for(int i = 1; i<preorder.size(); i++){
        if(i<=mid)leftPreorder.push_back(preorder[i]);
        else rightPreorder.push_back(preorder[i]);
    }
    for(int i = 1; i<inorder.size(); i++){
        if(i<=mid)leftInorder.push_back(inorder[i-1]);
        else rightInorder.push_back(inorder[i]);
    }

    root->left=buildTree(leftPreorder,leftInorder);
    root->right=buildTree(rightPreorder,rightInorder);
    return root;
}

int main(){

}