#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

vector<vector<int>>levelOrder(TreeNode* root){
    if(!root)return{{}};
    queue<pair<TreeNode*, int>>q;
    vector<vector<int>>res;
    vector<int>tmp;
    int level = 0;
    q.push({root,level});
    while(!q.empty()){
        pair<TreeNode*,int>p = q.front();
        q.pop();
        if(p.second!=level){
            level = p.second;
            res.push_back(tmp);
            tmp={};
        }
        tmp.push_back(p.first->val);
        if(p.first->left)q.push({p.first->left,p.second+1});
        if(p.first->right)q.push({p.first->right,p.second+1});    
    }
    res.push_back(tmp);
    return res;
}

int main(){

}