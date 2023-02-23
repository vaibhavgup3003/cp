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
       ll sum =0;
       for(auto&i:v){
        cin >> i;sum+=i;
       }
    //    sort(v.begin(),v.end());
       ll res =0;
    //    for (int i = 0; i < n/2; i++)
    //    {

    //     res = v[i] + v[n-1-i];
    //     v[i] = (res)/2;
    //     v[n-1-i] = res - v[i];
    //    }
    //    for(auto i:v){
    //     cout << i << " ";
    //    }
    //    cout << endl;
       ll ans = sum%n;
    //    for (int i = 1; i < n; i++)
    //    {
    //     ans += i*(abs(v[i+1-1]-v[i-1]));
    //     // cout << ans << endl;
    //    }
       cout << ans * (n-ans) << endl;

       
    }
}