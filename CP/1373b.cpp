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
        string s; cin>>s;
        int n = s.length();
        int cnt=0;
        for (int i = 0; i < s.length(); i++)
        {
            if((s[i]&1)==1)
            cnt++;
        }
        // cout << cnt << " ";
        if(min(cnt,(n-cnt))&1)
        cout << "DA\n";
        else
        cout << "NET\n";
        
    }
}