#include <bits/stdc++.h>
using namespace std;

struct pair_hash{
    size_t operator()(const pair<int,int>& p) const{
        return hash<int>()(p.first)^(hash<int>()(p.second)<<1);
    }
};

bool isValidSudoku(vector<vector<char>>& board){
    for(int i = 0; i<board.size(); i++){
        unordered_set<int>hashset;
        for(int j = 0; j<board.size(); j++){
            if(board[i][j]!='.'){
                if(hashset.find(board[i][j])!=hashset.end())return false;
                else hashset.insert(board[i][j]);
            }
        }
    }
    for(int i = 0; i<board.size(); i++){
        unordered_set<int>hashset;
        for(int j = 0; j<board.size(); j++){
            if(board[j][i]!='.'){
                if(hashset.find(board[j][i])!=hashset.end())return false;
                else hashset.insert(board[i][j]);
            }
        }
    }
    
    unordered_map<pair<int,int>,unordered_set<int>, pair_hash>mpp;
    
    for(int i = 0; i<board.size(); i++){
        for(int j = 0; j<board.size(); j++){
            if(board[j][i]!='.'){
                int a = i/3;
                int b = j/3;
                if(mpp[{a,b}].find(board[j][i])!=mpp[{a,b}].end())return false;
                else mpp[{a,b}].insert(board[i][j]);
            }
        }
    }
}

int main(){


}