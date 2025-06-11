#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

bool isSameTree(TreeNode* p, TreeNode* q){
    queue<TreeNode*>qp;
    queue<TreeNode*>qq;
    qp.push(p);
    qq.push(q);
    while(qq.size()||qp.size()){
        TreeNode* curr1 = qp.front();
        TreeNode* curr2 = qq.front();
        qp.pop();
        qq.pop();
        if(!curr1&&!curr2)continue;
        if(!curr1||!curr2)return false;
        if(curr1->val!=curr2->val)return false;
        qp.push(curr1->left);
        qp.push(curr1->right);
        qq.push(curr2->left);
        qq.push(curr2->right);
    }
    if(qq.size()||qp.size())return false;
    return true;
}

int main(){

}