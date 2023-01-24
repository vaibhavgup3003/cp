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
    int t;
    cin >> t;
    while (t--)
    {
        ll a,b,c; cin >> a>>b>>c;
        
if((2*b-c)>0&&(2*b-c)%a==0||(a+c)%(2*b)==0||(2*b-a)>0&&(2*b-a)%c==0) cout<<"YES"<<'\n';
else cout<<"NO"<<'\n';
    }
}