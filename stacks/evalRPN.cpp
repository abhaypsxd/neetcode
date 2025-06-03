#include <bits/stdc++.h>
using namespace std;

int evalRPN(vector<string>& tokens){
    stack<int>st;
    for(int i = 0; i<tokens.size(); i++){
        if((tokens[i].size()==1&&isdigit(tokens[i][0]))||tokens[i].size()>1&&isdigit(tokens[i][1]))st.push(stoi(tokens[i]));
        else{
            int a = st.top();
            st.pop();
            int b = st.top();
            st.pop();
            if(tokens[i]=="+")st.push(b+a);
            else if(tokens[i]=="-")st.push(b-a);
            else if(tokens[i]=="*")st.push(b*a);
            else st.push(b/a);
        }
    }
    return st.top();
}

int main(){
    vector<string>tokens = {"10","6","9","3","+","-11","*","/","*","17","+","5","+"};
    cout<<evalRPN(tokens)<<endl;

}