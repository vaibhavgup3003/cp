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
         int n,k;cin>>n>>k;
         vi v(n);
         for(auto&i:v){
            cin >> i;
         }
    
    for (int i = 0; i < n; i++)
    {
        while(k!=0 && v[i]>0){
            v[i]--;
            v[n-1]++;
            k--;
        }
        if(k==0){
            break;
        }
    }
    for(auto it:v){
        cout << it << " ";
    }
    cout << endl;
    }
}