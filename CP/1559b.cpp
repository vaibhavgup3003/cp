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
      int n;cin>>n;
      string s ;cin >>s;
      if(n ==1 && s[0] == '?')
      cout << 'B' << endl;
      for (int i = 0; i < n-1; i++)
      {
        if(s[i] == '?' && s[i+1] == 'R'){
          s[i] = 'B';
        }
        else if(s[i] == '?' && s[i+1] == 'B')
        s[i] = 'R';
        else if(s[i] == '?' && s[i+1] == '?'){
            if(s[i-1]=='R')
            s[i] = 'B';
            else 
            s[i] = 'R';
        }
      }
      if(s[n-1] == '?' && s[n-2] == 'B')
      s[n-1] = 'R';
      else if(s[n-1] == '?' && s[n-2] == 'R') 
      s[n-1] = 'B';
      cout << s  << endl;
    }
}