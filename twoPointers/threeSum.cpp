#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int>& nums){
    vector<vector<int>>res;
    unordered_set<int>cnt;
    sort(nums.begin(),nums.end());
    for(int i = 0; i<nums.size(); i++){
        if(cnt.find(nums[i])==cnt.end())
        {int target = -1*nums[i];
        int l = i+1;
        int r = nums.size()-1;
        while(l<r){
            if(nums[l]+nums[r]>target)r--;
            else if(nums[l]+nums[r]<target)l++;
            else {
                res.push_back({nums[i],nums[l],nums[r]});
                l++;
                while(nums[l]==nums[l-1]&&l<r)l++;
            }
        cnt.insert(nums[i]);
        }}

    }
    return res;
}

int main(){
    vector<int>nums={-1,0,1,2,-1,-4};
    vector<vector<int>>res=threeSum(nums);
    for(auto i:res){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}