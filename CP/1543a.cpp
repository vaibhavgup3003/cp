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
       lll a,b;cin >> a>>b;

       if (a==b)
       cout<< 0 << " " << 0 << endl;
       else {
       lll hcf = abs(a-b);
       cout << hcf << " ";
       cout << min(a%hcf, hcf - (a%hcf)) << endl;
       }
    }
    return 0;
}