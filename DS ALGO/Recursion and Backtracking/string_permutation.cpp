#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
// SOLUTION 1
    // void solve(vector<int>&ans, vector<int>&v, vector<vector<int>> &res, vector<int>&freq){
    //     if(ans.size()==v.size()){
    //         res.push_back(ans);
    //         return;
    //     }
    //     for(int i=0; i<v.size(); i++){
    //         if(freq[i]==0){
    //             ans.push_back(v[i]);
    //             freq[i]=1;
    //             solve(ans, v, res, freq);
    //             freq[i]=0;
    //             ans.pop_back();
    //         }
    //     }


    // }
    
    // vector<vector<int>> permute(vector<int>& nums) {
    //     vector<vector<int>> res;
    //     vector<int>ans;
    //     vector<int>freq(nums.size(),0);
    //     solve(ans, nums, res ,freq);
    //     return res;
        
    // }
// SOLUTION 2
    void solve(int ind, vector<int> &v, vector<vector<int>>&ans){
        if(ind == v.size()){
        ans.push_back(v);
        return;
        }
    
    for(int i=ind; i<v.size(); i++){
        swap(v[ind], v[i]);
        solve(ind+1, v, ans);
        swap(v[ind], v[i]);
    }
    }

 vector<vector<int>> permute(vector<int>& nums){
    vector<vector<int>> ans;
    solve(0, nums, ans);
    return ans;
}
};
int main(){

    return 0;
}