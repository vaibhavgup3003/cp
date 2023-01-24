#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lll int64_t
#define ld long double
#define vi vector<int>
#define PI 4.0*atan(1.0)
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define vii vector<pair<int,int>>
#define sq(x) (x)* (x)
int main()
{
    ll n;cin>>n;
    map<ll,ll> m;
    for (int i = 1; i <= n; i++)
    {
        ll a;cin>>a;
        m[a] =i;
    }
    // for(auto i:m){
    //     cout << i.first << " " << i.second << endl;
    // }
    if(m.size()<3)
    cout << -1 << " " << -1 << " "<< -1 <<endl;
    else  {
    int cnt = 0;
        for(auto i: m ){
          cout << i.second << " ";
          cnt++;
          if(cnt == 3)
          break;
        }
    }
    cout << endl;

    
}