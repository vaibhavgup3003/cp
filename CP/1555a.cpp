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
      int64_t n,a;cin>>n;
      // int n, a;
       
        if (n <= 6)
        {
            cout << 15 << endl;
        }
        else if (n % 2 == 0)
        {   
            a = 2.5 * n;
            cout << a << endl;
        }
        else
        {
            a = 2.5 * (n + 1);
            cout << a << endl;
        }



    }
}