#include<bits/stdc++.h>
using namespace std;
/*
This is a different kind of probelm in which the pick and non pick concept cannot work directly.
there are two methods by which any of the array problem can be solved.

1. is pick and non pick concept in which no boudation of unique elements or elements cannot be repeated.
2. in the other one you check that starting form the initial index which index u can select.

this problem is the example of second case.


how to ctuallyu thdill fthe drill on the fiuctgionh lahoi lnaiy

*/



class Solution {
public:
    void solve(vector<int> &ans, vector<vector<int>> &res, vector<int> &v, int target , int ind){
        // if(ind == v.size()){
            // when for loop is used the array is already traversed so no need of the above base case
            if(target==0){
            res.push_back(ans);return;
        }
        for (int i = ind; i < v.size(); i++)
        {
              if( i > ind && v[i] == v[i-1]) continue; if(v[i]>target) break;

              ans.push_back(v[i]);
              solve(ans, res, v, target-v[i], i+1);
              ans.pop_back();
        }
        
        // if(v[ind]<=target){
        //     ans.push_back(v[ind]);
        // solve(ans, res, v, target-v[ind], ind+1);
        // ans.pop_back();

    }   
    // else 
    // solve(ans, res, v ,target ,ind+1);
    
     vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> res;    
        vector<int> ans;
        solve(ans, res, candidates, target, 0);
        return res;
    }
};
int main(){

    return 0;
}

      