#include <bits/stdc++.h>
#include "TreeNode.h"
using namespace std;

class Codec{
private:
    void preorder(TreeNode* root, string&data){
        if(!root){
            data.append("@");
            data.append("&");
            return;
        }
        data.append(to_string(root->val)+"&");
        preorder(root->left,data);
        preorder(root->right,data);
    }
    TreeNode* build(queue<string>&nodes){
        string curr = nodes.front();
        nodes.pop();
        if(curr=="@")return nullptr;
        TreeNode* currNode = new TreeNode(stoi(curr));
        currNode->left=build(nodes);
        currNode->right=build(nodes);
        return currNode;
    }
public:
    string serialize(TreeNode* root){
        string data = "";
        preorder(root,data);
        return data;
    }


    TreeNode* deserialize(string data){
        if(data=="@&")return nullptr;
        queue<string>nodes;
        stringstream ss(data);
        string token;
        while(getline(ss,token,'&')){
            if(!token.empty()){
                nodes.push(token);
            }
        }
        return build(nodes);   
    }
};



int main(){
    
}