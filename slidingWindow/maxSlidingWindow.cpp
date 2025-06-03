#include <bits/stdc++.h>
using namespace std;

vector<int>maxSlidingWindow(vector<int>&nums, int k){
    deque<int>dq;
    vector<int>res;
    int l, r = 0;
    while(r<nums.size()){
        while(dq.size()&&dq.back()<nums[r]){
            dq.pop_back();
        }
        dq.emplace_back(r);
        if(l>dq.front())dq.pop_front();
        if(r>=k-1){
            res.push_back(nums[dq.front()]);
            l++;
        }
        r++;
    }
    return res;
}

int main(){

}