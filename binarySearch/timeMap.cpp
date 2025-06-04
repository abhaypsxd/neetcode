#include <bits/stdc++.h>
using namespace std;

class TimeMap{
private:
    unordered_map<string,vector<pair<string,int>>>mpp;
public:
    TimeMap(){

    }
    void set(string key, string value, int timestamp){
        mpp[key].push_back({value,timestamp});
    }
    string get(string key, int timestamp){
        int l = 0;
        int r = mpp[key].size()-1;
        int ans = -1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if(mpp[key][mid].second<=timestamp){
                ans = mid;
                l = mid+1;
            }
            else r = mid-1;
        }
        return ans==-1?"":mpp[key][ans].first;
    }
};

int main(){

}