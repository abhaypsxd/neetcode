#include <bits/stdc++.h>
using namespace std;

bool allZero(unordered_map<char,int>check){
    unordered_map<char,int>::iterator it = check.begin();
    while(it!=check.end()){
        if(it->second!=0)return false;
    }
    return true;
}

bool checkInclustion(string s1, string s2){
    unordered_map<char, int>check;
    int l = 0;
    int r = s1.size()-1;
    for(int i = 0; i<s1.size(); i++)check[s1[i]]++;
    for(int i = l; i<=r; i++)check[s2[i]]--;
    while(r<s2.size()){
        if(allZero(check))return true;
        check[s2[l]]++;
        l++;
        r++;
        check[s2[r]]--;
    }
    return false;
}

int main(){

}