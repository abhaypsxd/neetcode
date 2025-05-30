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

void postorder(TreeNode* node, vector<int>& arr){
    if(node){
        postorder(node->left, arr);
        postorder(node->right, arr);
        arr.push_back(node->val);
    }
}

vector<int>postorderTraversal(TreeNode* root){
    vector<int>arr;
    postorder(root,arr);
    return arr;
}