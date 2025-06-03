#include <bits/stdc++.h>
using namespace std;

int carFleet(int target, vector<int>& position, vector<int>& speed){
    map<int,int>mpp;
    int n = position.size();
    for(int i = 0; i<n; i++)mpp[position[i]]=speed[i];
    map<int,int>::iterator it = mpp.begin();
    stack<pair<int,int>>st;
    while(it!=mpp.end()){
        st.push({it->first,it->second});
        it++;
    }
    int res = 0;
    while(st.size()>1){
        pair<int,int>carA = st.top();
        st.pop();
        pair<int,int>carB = st.top();
        st.pop();
        // cout<<"CAR A: "<<carA.first<<" "<<carA.second<<endl;
        // cout<<"CAR B: "<<carB.first<<" "<<carB.second<<endl;
        double timeA = (double)(target-carA.first)/carA.second;
        double timeB = (double)(target-carB.first)/carB.second;
        // cout<<timeA<<" "<<timeB<<endl;
        if(timeA<timeB){
            st.push(carB);
            res++;
        }
        else{
            st.push(carA);
        }

    }
    if(st.size())return res+1;
    return res;
}

int main(){
    vector<int>position = {6,8};
    vector<int>speed = {3,2};
    cout<<carFleet(10,position,speed)<<endl;
}