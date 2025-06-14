#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&res, vector<int>&nums, vector<int>curr, int i, int&target){
    int sum = accumulate(curr.begin(), curr.end(),0);
    if(sum==target){
        res.push_back(curr);
        return;
    }
    if(i>=nums.size()||sum>target)return;
    curr.push_back(nums[i]);
    dfs(res,nums,curr,i,target);
    curr.pop_back();
    dfs(res,nums,curr,i+1,target);
}

vector<vector<int>>combinationSum(vector<int>&nums, int target){
    vector<vector<int>>res;
    vector<int>curr={};
    dfs(res,nums,curr,0,target);
    return res;
}

int main(){

}