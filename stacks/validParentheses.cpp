#include <bits/stdc++.h>
using namespace std;

bool isValid(string s){
    stack<int>st;
    unordered_map<char,char>mpp;
    mpp[')']='(';
    mpp['}']='{';
    mpp[']']='[';
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='{'||s[i]=='('||s[i]=='[')st.push(s[i]);
        else{
            char check = st.top();
            st.pop();
            if(mpp[s[i]]!=check)return false;
        }
    }
    return s.empty();
}

int main(){

}