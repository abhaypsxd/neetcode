#include <bits/stdc++.h>
using namespace std;

int largestRectangleArea(vector<int>& heights){
    int n = heights.size();
    vector<int>nextSmallerElement(n,0);
    vector<int>prevSmallerElement(n,0);
    stack<int>st;
    for(int i = n-1; i>=0; i--){
        if(st.empty())nextSmallerElement[i]=n;
        else{
            while(st.size()&&(heights[st.top()]>heights[i]))st.pop();
            if(st.size()){
                nextSmallerElement[i]=st.top();

            }
            else{
                nextSmallerElement[i]=n;
            }
        }
        st.push(i);
    }
    while(st.size())st.pop();
    for(int i = 0; i<n; i++){
        if(st.empty())prevSmallerElement[i]=-1;
        else{
            while(st.size()&&(heights[st.top()]>=heights[i]))st.pop();
            if(st.size()){
                prevSmallerElement[i]=st.top();

            }
            else{
                prevSmallerElement[i]=-1;
            }
        }
        st.push(i);
    }
    int res=0;
    for(int i = 0; i<n; i++){
        res=max(res,(nextSmallerElement[i]-prevSmallerElement[i]-1)*heights[i]);
    }
    // for(int i = 0; i<n; i++)cout<<prevSmallerElement[i]<<" ";
    // cout<<endl;
    // for(int i = 0; i<n; i++)cout<<nextSmallerElement[i]<<" ";
    // cout<<endl;
    return res;
}

int main(){
    vector<int>heights = {1,1};
    cout<<largestRectangleArea(heights);

}