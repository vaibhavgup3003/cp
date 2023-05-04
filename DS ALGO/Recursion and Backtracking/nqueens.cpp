/*
we first need to place a queen in the column
then we need to check that wheater it can be placed there or not
if it cannot be placed in the entire column then we backtreack 
and removing the previous queen fro mit s place.
*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSafe(int row, int col, vector<string> &board, int n ){
int duprow = row;
int dupcol = col;

while(row >=0 && col>=0){
    if(board[row][col] == 'Q')return false;
    row--;col--;
}
 row = duprow;
 col = dupcol;

while(row >=0 && col>=0){
    if(board[row][col] == 'Q')return false;
    col--;
}
 row = duprow;
 col = dupcol;
while(row <n && col>=0){
    if(board[row][col] == 'Q')return false;
    col--;
    row++;
 }
 return true;
}
    void solve(int col, vector<string> &board, vector<vector<string>>&res, int n ){
    if(col == n){
     res.push_back(board);
     return;}

     for(int row=0; row<n; row++){
         if(isSafe(row , col , board, n)){
             board[row][col] = 'Q';
             solve(col+1, board ,res, n);
             board[row][col] = '.';
         }
     }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,"");
        string s(n,'.');
        for(int i =0; i<n; i++)board[i]=s;
        vector<vector<string >> res;
        solve(0, board, res, n);
        return res;

    }
};

int main(){
     int n ; cin >> n;
     Solution obj;
  vector < vector < string >> ans = obj.solveNQueens(n);
  for (int i = 0; i < ans.size(); i++) {
    cout << "Arrangement " << i + 1 << "\n";
    for (int j = 0; j < ans[0].size(); j++) {
      cout << ans[i][j];
      cout << endl;
    }
    cout << endl;
  }

     
    return 0;
}

