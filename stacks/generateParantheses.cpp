#include <bits/stdc++.h>
using namespace std;

void backtrack(int openN, int closedN, int n, vector<string>&res, string s){
    if(openN==n&&closedN==n){
        res.push_back(s);
        return;
    }
    if(openN<n)backtrack(openN+1,closedN,n,res,s+='(');
    if(closedN<openN)backtrack(openN,closedN+1,n,res,s+=')');
}

vector<string> generateParenthesis(int n){
    vector<string>res;
    stack<char>st;
    backtrack(0,0,n,res,"");
    return res;
}

int main(){

}