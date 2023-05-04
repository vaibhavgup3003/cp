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
lll sum (lll n){
    lll ans=0;
    while(n){
        ans += n-(n/10*10);
        n=n/10;
    }
    return ans;
}
lll solve(lll n){
    if(__gcd(n,sum(n))>1)
       return n;
       else if(__gcd(n+1,sum(n+1))>1){
       return n+1;
       }
       else 
       return n+2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       lll n;cin>>n;
       cout << solve(n)  << endl;
       

    }
}