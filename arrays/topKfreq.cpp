#include <bits/stdc++.h>
using namespace std;

vector<int>topKFrequent(vector<int>&arr, int k){
    int n = arr.size();
    unordered_map<int,int>mpp;
    vector<vector<int>>buckets(n+1);
    for(int i = 0; i<n; i++){
        mpp[arr[i]]++;
    }
    cout<<"HI 1"<<endl;
    for(auto i:mpp){
        buckets[i.second].push_back(i.first);
    }
    cout<<"HI 2"<<endl;
    int idx=0;
    vector<int>res;
    for(int i = n; i>0; i--){
        if(k<buckets[i].size()){
            idx=i;
            break;
        }
        if(!buckets[i].empty()){
            for(auto j:buckets[i])res.push_back(j);
            k = k - buckets[i].size();
        }
    }
    cout<<"HI 3"<<endl;
    if(idx){
        while(k--){
            res.push_back(buckets[idx][k]);
        }
    }


    return res;
}

int main(){
    vector<int>nums={5,-3,9,1,7,7,9,10,2,2,10,10,3,-1,3,7,-9,-1,3,3};
    vector<int>ans=topKFrequent(nums,3);
    cout<<"ANSWERRRRRRRRRRRRRRRRR"<<endl;
    for(auto i:ans)cout<<i<<" ";
    cout<<endl;
}