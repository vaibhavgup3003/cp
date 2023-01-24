#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define lll int64_t
#define ld long double
#define vi vector<int>
#define PI 4.0*atan(1.0)
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define vii vector<pair<int,int>>
#define sq(x) (x)* (x)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
     int x,n,m; cin >>x>>n>>m;
     while(x>0  && (n>0||m>0) ){
      if(x>20 && n>0){
        x=x/2+10;
        n--;
      }
      else if(x<=40  && (m>0)){
        x-=10;
        m--;
      }
      else if(m>0 && n==0){
        x-=10;
        m--;
      }
      else if(n>0 && m==0){
        x=x/2+10;
        n--;
      }
    
     }
       if(x<=0){
        cout << "YES \n";
      }
      else 
      cout << "NO\n";


    }
}

// 34568   -1
// 17294  -1
// 8657  -1
//4338 -1
// 2169 -1
// 1094  -1
// 557   -1
// 288  -1
// 154  -1
// 87  -1
// 53 -1
// 36 -1
//28
// 24
// 22
// 21
// 20
