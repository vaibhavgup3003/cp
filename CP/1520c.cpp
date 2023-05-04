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
      int n; cin >>n;
      vi v;
      for (int i = 1; i <= n*n/2; i++)
      {
        v.push_back(2*i-1);
      }
      for (int i = 1; i <= n*n/2; i++)
      {
        v.push_back(2*i);
      }
      int k=0;
      if(n==2)cout<<-1<<endl;
      else{
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++, k++)
            {
                cout << v[k] << " ";
            }
            cout << endl;
        }
        
      }
    }
}