#include<bits/stdc++.h>
using namespace std;
int houserobber(vector<int> &nums, int ind, vector<int> &dp){
  if(ind==0)return nums[ind];
  if(ind<0) return 0;
  if(dp[ind]!=-1){
    return dp[ind];
  }

    
  int n = nums.size();
  int pick = nums[ind] + houserobber(nums, ind-2, dp);

  int notpick = 0 + houserobber(nums, ind-1,dp);
  return dp[ind] = max(pick, notpick);
}

int main(){
  vector<int> nums; 
 int n = nums.size();
        vector<int> dp(n,-1);
        vector<int>dpt(n,-1);
        // conversion of recursion to tabulation
        int take=0, nottake=0;
        int prev1=nums[0], prev2 = 0, curr = nums[1];
        for (int i = 1; i < n; i++)
        {
          // take = dp[i];if(i>1) take+=dp[i-2];
          take = nums[i]; if(i>1) take+= prev2;
          nottake = 0 + prev1;
          // nottake = 0 + dp[i-1];
          // dp[i] = max(take , nottake);
          curr = max(take , nottake);
          prev2 = prev1, prev1 = curr;
        }
        return prev1;
        
       // space optimisation
       // only dp[i-1] and dp[i-2] is required from the array
       // so there is not need to store the whole array
       // this is how space optimisation is done.
       // we will declare only two variables prev1 and prev2 for the above.

        // return (houserobber(nums, n-1, dp));
    return 0;
}