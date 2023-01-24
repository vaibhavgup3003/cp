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
    // int t;
    // cin >> t;
    // while (t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        string t;
        int mx=0;
        string ans;
        map<string,int>v;
        for (int i = 0; i < n-1; i++)
        { 
            t=s[i];
            t+=s[i+1];
            v[t]++;
            if(v[t]>mx)
            mx=v[t],ans=t;   // execute both statements but fir a value only righmost is considered

        }
        cout << ans;
        
        
        
    }

}