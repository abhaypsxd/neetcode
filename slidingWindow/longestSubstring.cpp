#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s){
    unordered_set<char>stt;
    int l = 0;
    int maxLength = 0;
    for(int r = 0; r<s.size(); r++){
        while(stt.find(s[r])!=stt.end()){
            stt.erase(s[l]);
            l++;
        }
        stt.insert(s[r]);
        maxLength=max(maxLength,r-l+1);
    }
    return maxLength;
}

int main(){

}