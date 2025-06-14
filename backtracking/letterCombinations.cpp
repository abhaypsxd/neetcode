#include <bits/stdc++.h>
using namespace std;

void dfs(unordered_map<char,string>&mpp, string&digits, vector<string>&res, int i, string curr){
    if(i==digits.size()){
        res.push_back(curr);
        return;
    }
    for(int j = 0; j<mpp[digits[i]].length(); j++){
        curr.push_back(mpp[digits[i]][j]);
        dfs(mpp,digits,res,i+1,curr);
        curr.pop_back();
    }
}

vector<string>letterCombinations(string digits){
    if(digits.empty())return{};
    unordered_map<char,string>mpp;
    mpp['2']="abc";
    mpp['3']="def";
    mpp['4']="ghi";
    mpp['5']="jkl";
    mpp['6']="mno";
    mpp['7']="pqrs";
    mpp['8']="tuv";
    mpp['9']="wxyz";
    vector<string>res;
    string curr = "";
    dfs(mpp,digits,res,0,curr);
    return res;
}

int main(){

}