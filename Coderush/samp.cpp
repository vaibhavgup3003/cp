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
     int n;cin>>n;string s ;cin >>s;
    //  int z=0,one=0;

    string x1, x2;
  
    x1[0]= '0';
    x2[0]='1';
    // for (int i = 0; i < n; i++) {
    //     x1[i+1] = x1[i]^s[i];
    //     if(x1[i]=='1')C++;
    // }
    for (int i = 0; i < n; i++) {
        if(x1[i]=='0' && s[i]=='1')
        x1[i+1] = '1';
        else if (x1[i]=='1' && s[i]=='0')
        x1[i+1] = '1';
        else x1[i+1]='0';
        
    }
    // cout << x1 << " " << x2 << endl;
    for (int i = 0; i < n; i++) {
        if(x2[i]=='0' && s[i]=='1')
        x2[i+1] = '1';
        else if (x2[i]=='1' && s[i]=='0')
        x2[i+1] = '1';
        else x2[i+1]='0';
        
    }
int cntx1=0, cntx2=0;
    for (int i = 0; i < n; i++)
    {
    if(x1[i]=='1')cntx1++;
    if(x2[i]=='1')cntx2++;
    }
    cout << max(cntx1, cntx2) << endl;
    
    
    // cout << max(C,D) << endl;

    //  cout << min(z,one)+1 << endl;
     
    }
}



