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
      int n,m,q;
      cin>>n>>m>>q;
      while(q--){
      int res =0;

        int s; cin>>s;
        while(res<n){
      if(s>res)
        s-=res+1;
      else 
      break;
      res=res+1;}
      
      cout << 1 << " " << res << "\n";
      vi v;
      while(res>=1){
        v.push_back(min(s/res,m-1));
        s-=v.back()*res;res--;

      }
      int x = v.size();
      for(int i=x-1; i>=0; i--)
        cout << v[i]+1<<" ";
      cout << "\n";
      }
    }
}


// int32_t main(){
//     int n, m, q;
//     cin >> n >> m >> q;

//     for(int i = 0; i < q; i++){
//         int x;
//         cin >> x;
//         int t = 0;
//         while(t < n){
//             if(x > t){
//                 x -= t + 1;
//             }else{
//                 break;
//             }
//             t++;
//         }
//         cout << 1 << " " << t << endl;
//         vector<int> a;
//         while(t >= 1){
//             a.push_back(min(x / t, m - 1));
//             x -= a.back() * t;
//             t--;
//         }
//         for(int i = a.size() - 1; i >= 0; i--){
//             cout << a[i] + 1 << " ";
//         }
//         cout << endl;
//     }
