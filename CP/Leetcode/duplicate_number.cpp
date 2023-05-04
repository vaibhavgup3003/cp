#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int i =0; i<nums.size(); i++){
            m[nums[i]]++;
        }
        int ans =0;
        for(auto &it:m){
            if(it.second > 1)
            ans = it.first;
            
        }

        
        return ans;
    }
int main(){
  int n;
  cin >>n;
  vector<int>v(n);
  for(auto &i:v){
    cin >> i;
  }
  cout << findDuplicate(v);
    return 0;
}