// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//   int n, s;
//   cin >> n >> s;
//   vector<int> arr;
//   while (n--) {
//     int x = s / n;
//     arr.push_back(x);
//     s -= x;
//   }
//   int median = 0;
  
//     median = arr[ceil(arr.size() / 2)];
  
//   cout << median << endl;
//   return 0;
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
#define vecinp for(auto&i:arr)cout<<i;
#define vs vector<string>
#define vii vector<pair<int,int>>
#define sq(x) (x)* (x)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
ll n, s;
  cin >> n >> s;
  ll res;
  if(n&1)
  res = n-(ceil(n/2));
  else
   res = n-(ceil(n/2))+1;
  ll median = s/res;
  cout << median << endl;
    }
}