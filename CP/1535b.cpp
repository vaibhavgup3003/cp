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
bool cmp(int a, int b){
    
    return b>a%2;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
       int n; cin >>n;
       vi v(n);
       for(auto &i:v){
        cin>>i;
       }
    //    sort(v.begin(),v.end(),cmp);
       int cnt =0;
    //    for(auto&i:v)
    //    cout << i;
       for (int i = 0; i < n; i++)
       {
        for (int j = i+1                ; j < n; j++)
        {
            if(i!=j){
            if(__gcd(v[i],2*v[j])>1 || __gcd(v[j],2*v[i])>1)
            cnt++;}
        }
        
       }
       cout << cnt << endl;
    }
}