#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    int n = s.length()/2;
    for(int i = 0; i<n; i++){
        if(s[i]!=s[s.length()-1-i])return false;
    }
    return true;
}

void dfs(vector<vector<string>>&res, string&s, vector<string>tmp, int i){
    if(i>=s.length()){
        res.push_back(tmp);
        return;
    }
    int j = i;
    for(int j = i + 1; j <= s.size(); j++){
        string sub = s.substr(i, j - i);     
        if(isPalindrome(sub)){
            tmp.push_back(sub);
            dfs(res, s, tmp, j);
            tmp.pop_back();
        }
    }
}

vector<vector<string>>partition(string s){
    vector<vector<string>>res;
    vector<string>tmp;
    dfs(res,s,tmp,0);

    return res;
}

int main(){
    partition(
        "abhay"
    );
}