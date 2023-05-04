/*           **DYNAMIC PROGRAMMING **
--> calling a same subproblen is called overlapping subproblem
--> to fix this memoization is used

Recursion is top down approach
Tabulation is bottom up approach

*** UNDERSTANDING IF TO USE DP ***
* count total no of ways
* find minimal of maximal solutions of n solutions
* in recursion subproblems are overlapping
*/

/*  *** WAYS TO HANDLE PROBLEMS***
* represent the problem in terms of index
* do all possible stuff on that index acc to problem
* sum up all the stuff and find min , max f that as requird
*/



#include<bits/stdc++.h>
using namespace std;

// fibonacci with dp

int f(int n){
    if(n<=1){
        return n;
    }
    vector<int> dp(n+1,-1);                // declare an dp array to store the subproblems
    if(dp[n]!=-1)                          // check if the problem is previously solved
    return dp[n];                          // if yes return it
    return dp[n] = f(n-1)+ f(n-2);

    // TC here is O(n), SC is O(n)+O(n);
}

// avoid using global variables is a good pp
int main(){
    int n;cin>>n;
    // vector<int> dp(n)

 //TABULATION METHOD
 int dp[n+1];
 dp[0]=0;
 dp[1]=1;
 for (int i = 2; i <= n; i++)
 {
    dp[i] =dp[i-1]+dp[i-2];
 }
 
 cout << dp[n];
    // cout << f(n) << endl;
}