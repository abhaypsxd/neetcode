#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices){
    int n = prices.size();
    int maxProfit = 0;
    int l = 0;
    int r = 1;
    while(r<n){
        if(prices[l]>=prices[r]){
            l=r;
            r++;
        }
        else{
            maxProfit=max(maxProfit,prices[r]-prices[l]);
            r++;
            
        }
    }
    return maxProfit;
}

int main(){

}