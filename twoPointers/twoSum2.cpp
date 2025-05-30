#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum_sorted(vector<int>& numbers, int target){
    int l = 0;
    int r = numbers.size()-1;
    while(l<r){
        if(numbers[l]+numbers[r]>target){
            r--;
        }
        else if(numbers[l]+numbers[r]<target){
            l++;
        }
        else{
            break;
        }
    }
    return {l+1,r+1};
}

vector<int> twoSum(vector<int>& nums, int target){
    unordered_map<int,int>mpp;
    for(int i:nums){
        if(mpp.find(target-nums[i])!=mpp.end()){
            return {i, mpp[target-nums[i]]};
        }
        else mpp[nums[i]]=i;
    }
    return {};
}

int main(){

}