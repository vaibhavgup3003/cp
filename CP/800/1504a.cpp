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
      string s;cin>>s;
      int  n=s.length();
      int cnt = 0;
      for (int i = 0; i < n; i++)
      {
        if(s[i]=='a')
        cnt++;
      }
      int e=0;
      if(cnt==n)
      cout << "NO\n";
      else{
        cout << "YES\n";
      for (int i = 0; i < n, e==0; i++)
      {
        
        if(s[i]==s[n-1-i] && s[i]!='a')
        cout << s+"a" << endl,e++;
      }
      }
      
      // else{
      // cout <<"YES" << endl;
      //   int ind = s.find('a');
      //   if(ind!=)
      //   s.insert(ind+1, "a");
      //   cout << s <<endl;
        
      // }


    }
}