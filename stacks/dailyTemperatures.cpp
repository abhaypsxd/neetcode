#include <bits/stdc++.h>
using namespace std;

vector<int>dailyTemperatures(vector<int>&temperatures){
    int n = temperatures.size();
    vector<int>res(n);
    stack<int>st;
    for(int i = n-1; i>=0; i--){
        while(st.size()&&temperatures[st.top()]<temperatures[i]){
            st.pop();
        }
        if(st.empty())res[i]=0;
        else res[i]=st.top()-i;
        st.push(i);
    }
    return res;
}

int main(){
    vector<int>temperatures={30,60,90};
    vector<int>res = dailyTemperatures(temperatures);
    for(auto i:res)cout<<i<<" ";
    cout<<endl;

}