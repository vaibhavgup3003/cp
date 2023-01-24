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
 int k; cin >> k;
 vi v(12);
 for(auto&i: v){
  cin >> i;
 }
 sort(v.begin(),v.end());
 int i =11;
 int cnt = 0;
 ll sum =0;
 while(sum<k&& i>=0){
  sum+= v[i];
  cnt++;
  i--;
 }
 if(sum>=k)
 cout << cnt ;
 else 
 cout << -1;
}