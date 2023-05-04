#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
        void solve(int ind, vector<int>&ans, vector<vector<int>> &res, vector<int> &v, int target){
        
        if(ind == v.size()){
            if(target == 0){
                res.push_back(ans);
            }
            return ;
        }
        if(v[ind]<=target){
            ans.push_back(v[ind]);
            // target -= v[ind];
        
        solve(ind, ans,res, v, target-v[ind]);
        ans.pop_back();
        }
        // target += v[ind];
        solve(ind+1,ans, res, v,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;    
        vector<int> ans;
        solve(0, ans, res, candidates, target);
        return res;
    }
};
int main(){
    Solution s;
    
vector<int>v ={1,2,3,4,5};
int target = 6;
vector<int> ans;
vector<vector<int>> res = s.solve(0, ans, v, target);
for (int i = 0; i < res.size(); i++)
{
    for (int j = 0; j < res[i].size(); j++)
    {
        cout << res[i][j];
    }
    
}

    return 0;
}

