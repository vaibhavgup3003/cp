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
         int n ;cin >>n ;
         vi v(n);
         vecinp
         int dif, res, maxi=INT_MAX;
         int dif1 = v[0]-v[1];
         int dif2 = v[n-2]- v[n-1];
         for (int  i = 1; i < n-1; i++)
         {
            dif = v[i]-(max(v[i+1], v[i-1]));
            if(dif<maxi) maxi = dif;
         }
         res = min(dif1, dif2);
         cout << min(res, dif) << endl; 
         for (size_t i = 0; i < count; i++)
         {
            /* code */

            
         }
         

    }
}
