#include<bits/stdc++.h>
using namespace std;
int frog_jump(vector<int>v, int ind , vector<int>&dp){
    // ind = v.size()-1;
    // vector<int>dp(-1);
    // want to reach ind = n-1 in min energy required  
    if(ind == 0)return 0;
    if(dp[ind]!=-1)return dp[ind];
    int left = frog_jump(v, ind-1, dp) + abs(v[ind]-v[ind-1]);
    int right = INT_MAX;
    if(ind>1)
    right = frog_jump(v, ind-2, dp) + abs(v[ind]-v[ind-2]);
    return dp[ind] = min(left,right);

    // now we need to find overlapping subproblems
    // and convert a recurrence into a dp 
}

/* to insert dp
* first declare a dp array in the function, carry it;
* store the return value in dp array
* check if value is present in dp array then return it;
*/


/*
    CONVERT THIS RECURRENCE RELATION INTO TABULATION METHOD
    * initiallise the dp array to 0;
    * write the bse case; --> dp[0] = 0; (in this que)
    * then write the loop comdition
*/

int frog_jump_tabulation(vector<int>v, int ind , vector<int>&dp){
    dp[0] = 0;
    int ss,fs;
    for (int  i = 0; i < v.size(); i++)
    {
        fs = dp[ind-1] + abs(v[ind]-v[ind-1]);
        if(i>1)
        ss = dp[ind-2] + abs(v[ind]-v[ind-2]);
    }
    
}
int main(){
    int n; cin >> n;
    vector<int> v(n);
    vector<int> dp(n+1,-1);
    for(auto&i:v){
        cin >> i;
    }
    cout << frog_jump(v, n-1, dp) << endl;
    
    return 0;
}