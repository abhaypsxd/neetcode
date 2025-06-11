#include <bits/stdc++.h>
using namespace std;

vector<long long>maximumEvenSplit(long long finalSum){
    vector<long long>res;
    if(finalSum%2)return res;
    long long k = 1;
    while(finalSum-2*k>=2*(k+1)){
        res.push_back(2*k);
        finalSum-=2*k;
        k++;
    }
    if(finalSum)res.push_back(finalSum);
    return res;
}

int main(){

}