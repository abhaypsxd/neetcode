#include <bits/stdc++.h>
using namespace std;


string minWindow(string s, string t){
    if(t.empty())return "";
    unordered_map<char,int>mapT;
    unordered_map<char,int>window;
    for(int i = 0; i<t.size(); i++)mapT[t[i]]++;
    pair<int,int>res;
    int resLen = INT_MAX;
    int have = 0;
    int need = mapT.size();
    int l = 0;

    for(int r = 0; r<s.size(); r++){
        window[s[r]]++;
        if(mapT.count(s[r])&&mapT[s[r]]==window[s[r]])have++;
        while(have==need){
            if(r-l+1<resLen){
                resLen=r-l+1;
                res={l,r};
            }
            window[s[l]]--;
            if(mapT.count(s[l])&&mapT[s[l]]<window[s[r]])have--;
            l++;
        }
    }
    return resLen==INT_MAX ? "" : s.substr(res.first, resLen);
}

int main(){

}