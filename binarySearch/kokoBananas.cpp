#include <bits/stdc++.h>
using namespace std;

int timeTaken(vector<int>&piles, int s){
    int res = 0;
    for(auto pile:piles){
        int time = (pile-1)/2+1;
        res+=time;
    }
    return res;
}

int minEatingSpeed(vector<int>& piles, int h){
    int l = 1;
    int r = 0;
    for(auto pile:piles)r=max(r,pile);
    while(l<=r){
        int mid = l+(r-l)/2;
        if(timeTaken(piles,mid)>h)r = mid-1;
        else l = mid+1;
    }
    return l;
}

int main(){

}