#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void solve(int ind, vector<int>&v, vector<int> &ans, vector<vector<int>>&res ){
        // if(ind == v.size()){
        //     res.push_back(ans);
        // }
        res.push_back(ans);
        for(int i=ind; i<v.size(); i++){
            if(i!=ind && v[i]==v[i-1])continue;

            ans.push_back(v[i]);
            // to pick
            solve(i+1, v, ans,res);
            // not pick
            ans.pop_back();
        }
            // solve(ind+1, v, ans ,res);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        solve(0, nums, ans, res);
        return res;
    }
};
int main(){
        return 0;
}