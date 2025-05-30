#include <bits/stdc++.h>
using namespace std;

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(){
        val=0;
        left=nullptr;
        right=nullptr;
    }

    TreeNode(int x){
        val = x;
        left=nullptr;
        right=nullptr;
    }

    TreeNode(int x, TreeNode* left_child, TreeNode* right_child){
        val = x;
        left = left_child;
        right = right_child;
    }

};

void preorder(TreeNode* node, vector<int>& arr){
    if(node){
        arr.push_back(node->val);
        preorder(node->left, arr);
        preorder(node->right, arr);
    }
}

vector<int>preorderTraversal(TreeNode* root){
    vector<int>arr;
    preorder(root,arr);
    return arr;
}