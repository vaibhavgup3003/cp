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
bool cmp(int a,int b){
    return a>b;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       ll n,h; cin >> n>>h;
       vll v(n);
       for(auto & i: v){
        cin >> i;
       }
       sort (v.begin(), v.end(), cmp);
       ll cnt =0;
    //    v[0] = *max_element(v.begin(),v.end());
       
    //    int i =0;
       while(h>0){
        h = h-v[0];
        cnt++;
        if(h>0)
        h-=v[1],cnt++;
        
       }
       cout << cnt << endl;
       
    }
}