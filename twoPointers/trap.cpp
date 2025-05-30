#include <bits/stdc++.h>
using namespace std;

int trap(vector<int>& height){
    int n = height.size();
    vector<int>leftMaxArr(n);
    vector<int>rightMaxArr(n);
    int leftMax = 0;
    int rightMax = 0;
    leftMaxArr[0]=0;
    rightMaxArr[n-1]=0;
    for(int i = 1; i<n; i++){
        leftMax=max(leftMax,height[i-1]);
        leftMaxArr[i] = leftMax;
        rightMax=max(rightMax,height[n-i]);
        rightMaxArr[n-i-1]=rightMax;
    }
    for(auto i:leftMaxArr)cout<<i<<" ";
    cout<<endl;

    for(auto i:rightMaxArr)cout<<i<<" ";
    cout<<endl;


    int trappedWater = 0;
    for(int i = 0; i<n; i++)trappedWater+=max(0,(min(leftMaxArr[i],rightMaxArr[i])-height[i]));
    
    return trappedWater;
}

int trap2(vector<int>& height){
    int n = height.size();
    int l = 0;
    int r = n-1;
    int leftMax=height[0];
    int rightMax=height[n-1];
    int trappedWater = 0;
    while(l<r){
        if(leftMax<rightMax){
            l++;
            leftMax=max(leftMax,height[l]);
            trappedWater+=leftMax-height[l];
        }
        else{
            r--;
            rightMax=max(rightMax,height[r]);
            trappedWater+=rightMax-height[r];
        }
    }
    return trappedWater;
}

int main(){
    vector<int>nums = {4,2,0,3,2,5};
    int ans = trap(nums);
}