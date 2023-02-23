#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lll int64_t
#define ld long double
#define vi vector<int>
#define PI 4.0*atan(1.0)
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vecinp for(auto&i:v)cin>>i;
#define vs vector<string>
#define vii vector<pair<int,int>>
#define sq(x) (x)* (x)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
         int n;cin >> n;
         vll v(n);
         if(n%2!=0){
          cout << -1 << endl;
         }
         else 
         {
          // for(ll i=0; i< n/2; i++){
          //   cout << pow(-1,i)*(i+1) << " ";
          // }
          // for (ll i = 0; i <n/2; i++)
          // {
          //   cout << pow(-1, i) * (n/2-i) << " ";
          // }
          for (ll i = 1; i <= n/2; i++)
          {
            // cout << pow(-1,2*i) *i << endl; 
            cout << (i%2==0? -1*i: i ) << " ";
          }
          for (ll i = n/2+1; i>1; i--)
          {
            // cout << pow(-1,2*i) *i << endl; 
            cout << (i%2==0? -1*(i-1): i-1 ) << " ";
          }
          
          cout << endl;
         }
         
        
    }
      

    
}