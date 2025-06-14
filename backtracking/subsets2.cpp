#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&res,vector<int>&nums,vector<int>curr,int i){
    if(i>=nums.size()){
        res.push_back(curr);
        return;
    }
    curr.push_back(nums[i]);
    dfs(res,nums,curr,i+1);
    curr.pop_back();
    int nextIdx = upper_bound(nums.begin(),nums.end(),nums[i])-nums.begin();
    dfs(res,nums,curr,nextIdx); 
}

vector<vector<int>>subsetsWithDup(vector<int>&nums){
    vector<vector<int>>res;
    vector<int>curr;
    dfs(res,nums,curr,0);
    return res;
}

int main(){

}