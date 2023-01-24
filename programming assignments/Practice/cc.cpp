// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define lll int64_t
// #define ld long double
// #define vi vector<int>
// #define PI 4.0*atan(1.0)
// #define vvi vector<vector<int>>
// #define vll vector<ll>
// #define vs vector<string>
// #define vii vector<pair<int,int>>
// #define sq(x) (x)* (x)
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//        ll n;cin>>n;
//        vll v;
//        vll a,b;
//        for (int i = 1; i <= 2*n; i++)
//        {
//          cin >> v[i];
//        }
       

//        for (int i = 1; i <= n; i++)
//        {
//          if(v[i]>n){
//             a.push_back(i);
//          }
//        }
//        for (int i = 1; i <= n; i++)
//        {
//          if(v[i]<=n){
//             b.push_back(i);
//          }
//        }
//        a.insert(a.rbegin(),0);
//        b.insert(b.rbegin(),0);


//     }
// }

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
int main() { 
 int t;
 cin >> t; 
 while (t--) 
 {  
   int n;cin>>n; 
vector<int> v; 
 for(int i=0;i<2*n;i++){ 
 int a;cin>>a; 
 v.push_back(a); 
 } 
 vector<int> dif1; 
 vector<int> dif2; 

 for(int i=0;i<n;i++){ 
 if(v[i]>n){ 
 dif1.push_back(i+1);
 } 
 } 
 for(int i=n;i<2*n;i++){ 
 if(v[i]<=n){ 
 dif2.push_back(i+1); 
 } 
 } 
 sort(dif1.begin(),dif1.end()); 
 sort(dif2.begin(),dif2.end()); 
 int ans =0; 
 int sz = dif1.size(); 
 for(int i=0;i<sz;i++){ 
 ans += abs(dif1[i] - dif2[i]); 
 } 
 cout << ans <<endl;
 }
}