#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&res, vector<bool>used, vector<int>&nums, vector<int>curr){
    if(curr.size()==nums.size()){
        res.push_back(curr);
        return;
    }
    for(int i = 0; i<nums.size(); i++){
        if(used[i])continue;
        used[i]=true;
        curr.push_back(nums[i]);
        dfs(res,used,nums,curr);
        curr.pop_back();
        used[i]=false;
    }
}

vector<vector<int>>permute(vector<int>&nums){
    vector<vector<int>>res;
    vector<bool>used(nums.size(),false);
    vector<int>curr;
    dfs(res,used,nums,curr);
    return res;
}

int main(){

}