#include <bits/stdc++.h>
using namespace std;

//using a while loop.

int searchWhile(vector<int>&nums, int target){
    int l = 0, r = nums.size()-1;
    while(l<=r){
        int mid = l+(r-l)/2;
        if(nums[mid]>target){
            r = mid-1;
        }
        else if(nums[mid]<target){
            l = mid+1;
        }
        else return mid;
    }
    return -1;
}

//using a recursive function.

int recursiveSearch(vector<int>&arr, int l, int r, int target){
    int mid = l+(r-l)/2;
    if(target==arr[mid])return mid;
    else if(target<arr[mid])return recursiveSearch(arr,l,mid-1,target);
    else return recursiveSearch(arr,mid+1,r,target);
}

int search(vector<int>&nums, int target){
    int l = 0, r = nums.size()-1;
    return recursiveSearch(nums,l,r,target);
}

int main(){

}