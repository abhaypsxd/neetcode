#include <bits/stdc++.h>
using namespace std;

vector<int>productExceptSelf_mem(vector<int>& nums){
    int n = nums.size();
    vector<int>prefix(n+1);
    vector<int>postfix(n+1);

    prefix[0]=1;
    postfix[n]=1;
    for(int i = 1; i<=n; i++){
        prefix[i]=prefix[i-1]*nums[i-1];
    }
    for(int i = n-1; i>=0; i--){
        postfix[i]=postfix[i+1]*nums[i];
    }
    // for(auto i:prefix)cout<<i<<" ";
    // cout<<endl;

    // for(auto i:postfix)cout<<i<<" ";
    // cout<<endl;
    vector<int>res;
    for(int i = 0; i<n; i++){
        res.push_back(prefix[i]*postfix[i+1]);
    }
    return res;
}   

vector<int>productExceptSelf(vector<int>&nums){
    int n = nums.size();
    vector<int>res(n);
    res[0]=1;
    for(int i = 0; i<n-1; i++){
        res[i+1]=res[i]*nums[i];
    }
    int post = 1;
    for(int i = n-1; i>=0; i--){
        res[i]*=post;
        post*=nums[i];
    }
    return res;
}

int main(){
    vector<int>nums={1,2,3,4};
    vector<int>ans=productExceptSelf(nums);
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;

}