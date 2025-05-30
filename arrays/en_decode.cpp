#include <bits/stdc++.h>
using namespace std;

int strtoint(string s){
    int k=0;
    int n = s.size();
    for(int i = 0; i<n; i++){
        char c = s[n-1-i];
        int m = c-'0';
        k+=pow(10,i)*m;
    }
    return k;
}

string encode(vector<string>& strs){
    string s;
    for(int i = 0; i<strs.size(); i++){
        int n = strs[i].size();
        string s0 = to_string(n);
        s=s+s0;
        s=s+',';
    }
    s=s+';';
    for(int i = 0; i<strs.size(); i++){
        s+=strs[i];
    }
    return s;
}

vector<string> decode(string s){
    vector<string>ans;
    int i = 0;
    vector<int>lengths;
    string curr_num="";
    while(s[i]!=';'){
        if(s[i]==','){
            lengths.push_back(strtoint(curr_num));
            curr_num="";
        }
        else curr_num+=s[i];
        i++;
    }
    // for(auto i:lengths)cout<<i<<" ";
    // cout<<endl;
    for(int j = 0; j<lengths.size(); j++){
        string curr="";
        int l = lengths[j];
        int k = 1;
        while(l--){
            curr+=s[i+k];
            k++;
        }
        i = i+k-1;
        ans.push_back(curr);
    }
    return ans;
}

int main(){
    vector<string> strs = {"hello","my","name","is","abhay"};
    string s = encode(strs);
    vector<string>ans = decode(s);
    for(auto i: ans)cout<<i<<endl;
    // cout<<s<<endl;
}