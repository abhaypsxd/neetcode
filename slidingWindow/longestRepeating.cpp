#include <bits/stdc++.h>
using namespace std;

int maxInMap(unordered_map<char,int>mpp){
    unordered_map<char,int>::iterator it = mpp.begin();
    int mxx = it->second;
    while(it!=mpp.end()){
        mxx=max(mxx,it->second);
        it++;
    }
    return mxx;
}

int characterReplacement(string s, int k){
    int n = s.size();
    unordered_map<char, int>mpp;
    int res = 0;
    int l = 0;
    for(int r = 0; r<n; r++){
        mpp[s[r]]++;
        while(r-l+1-maxInMap(mpp)>k){
            mpp[s[l]]--;
            l++;
        }
        res = max(res,(r-l+1));

    }
    return res;
}

int main(){
    string s ="AABABBA";
    cout<<characterReplacement(s,2)<<endl;
}