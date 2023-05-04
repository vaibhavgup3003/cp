//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void solve(int ind, vector<int> &v, vector<int > &ans, int sum){
        // sum =0;
        if(ind==v.size()){
         ans.push_back(sum);
        }
        if(ind<v.size()){
            // sum+=v[ind];
            // pick the element
            solve(ind+1, v, ans, sum+v[ind]);
            // not pick the element 
            solve(ind+1, v, ans, sum);
            
           
        }
        // solve(ind-1 , v, ans, sum);
    }
    vector<int> subsetSums(vector<int> arr, int N)
    {
        vector<int> ans;
        
        solve(0, arr, ans, 0);
        sort(ans.begin(), ans.end());
        return ans;
        
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends