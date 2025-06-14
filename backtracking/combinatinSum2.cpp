#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>>&res, vector<int>&candidates, vector<int>curr, int i, int target){
    int sum = accumulate(curr.begin(),curr.end(),0);
    if(sum==target){
        res.push_back(curr);
        return;
    }
    if(sum>target||i>=candidates.size())return;
    curr.push_back(candidates[i]);
    dfs(res,candidates,curr,i+1,target);
    curr.pop_back();
    int j = i;
    while(j<candidates.size()&&candidates[j]==candidates[i])j++;
    if(j==candidates.size())return;
    dfs(res,candidates,curr,j,target);
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target){
    sort(candidates.begin(),candidates.end());
    vector<vector<int>>res;
    vector<int>curr={};
    dfs(res,candidates,curr,0,target);
    return res;
}

int main(){

}