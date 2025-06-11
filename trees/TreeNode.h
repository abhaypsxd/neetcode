#ifndef TREENODE_H
#define TREENODE_H

struct TreeNode{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(){
        val = 0;
        left = nullptr;
        right = nullptr;
    }
    TreeNode(int valP){
        val = valP;
        left = nullptr;
        right = nullptr;
    }
    TreeNode(int valP, TreeNode* leftP, TreeNode* rightP){
        val = valP;
        left = leftP;
        right = rightP;
    }
};

#endif