#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>& nums){
    unordered_set<int>numSet;
    int ans = 0;
    for(int i:nums)numSet.insert(i);
    unordered_set<int>::iterator it = numSet.begin();
    while(it!=numSet.end()){
        if(!(numSet.find(*it-1)!=numSet.end())){
            cout<<"YES"<<endl;
            int len = 1;
            while(numSet.find(*it+len)!=numSet.end()){
                len++;
            }
            ans=max(len,ans);
        }
        it++;
    }
    return ans;
}

int main(){
    vector<int>nums = {0,0,-1};
    int ans = longestConsecutive(nums);
    cout<<ans<<endl;
}