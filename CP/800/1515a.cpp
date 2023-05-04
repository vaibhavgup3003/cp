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
       int n,x;cin>>n>>x;
       vi v(n);
       int cnt=0;
       for(auto&i:v){
        cin >> i;
        if(i==x)
        cnt++;
       }
       int j=0,nt=0;
       if(cnt==n)
       cout << "NO\n";
       else {
        cout << "YES\n";
        while(v[j]==x){
        nt++;}
        for (int k = nt; k < n; k++)
        {
            cout << v[k] <<" ";
        }
        while(nt!=0)
        cout << x << " ";
        nt--;
        cout << endl;
       }

       
    }
}