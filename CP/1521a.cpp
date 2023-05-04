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
      ll a,b;
      cin >> a>>b;
      if(b==1)
      cout << "No\n";
      else 
      cout << "Yes\n"<< a*b+(a) << " " << a*b-a << " " << 2*(a*b) << endl;
    }
}