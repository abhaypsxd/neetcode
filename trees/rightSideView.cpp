#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

vector<int> rightSideView(TreeNode* root){
    if(!root)return {};
    queue<pair<TreeNode*, int>>q;
    vector<int>res;
    vector<int>tmp;
    int level = 0;
    q.push({root,0});
    while(!q.empty()){
        pair<TreeNode* ,int>p = q.front();
        q.pop();
        if(p.second!=level){
            res.push_back(tmp[tmp.size()-1]);
            tmp={};
            level = p.second;
        }
        tmp.push_back(p.first->val);
        if(p.first->left)q.push({p.first->left,p.second+1});
        if(p.first->right)q.push({p.first->right,p.second+1});
    }
    res.push_back(tmp[tmp.size()-1]);
    return res;
}

int main(){

}