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
        string s; cin >>s;
      int n = s.length();
      int i=0;
      int ans = 0;
    //   string :: iterator p = s.end();
      
      while(s[n-i-1]!= '0' && s[n-1-i] != '5'){
         ans++;
         s.pop_back();
         i++;
      }
      cout << s;
      s.pop_back();
      i=0;
      while(s[n-i-1]!= '0' && s[n-1-i] != '2' && s[n-1-i] != '5' && s[n-1-i] != '7')  {
         ans++;
         s.pop_back();
         i++;
      }
    //   cout << ans << endl;
}
}