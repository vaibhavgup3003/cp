
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define lll int64_t
#define ld long double
#define vi vector<int>
#define PI 4.0 * atan(1.0)
#define vvi vector<vector<int>>
#define vll vector<ll>
#define vs vector<string>
#define vii vector<pair<int, int>>
#define sq(x) (x) * (x)

int ss(string s)
{
  map<char, int> m;
  int len = s.length();
  for (int i = 0; i < len; i++)
  {
    if (m[s[i]] == 1)
    {
      string a = s.substr(0, i);
      string b = s.substr(i);
      // cout  << a << " " << b << endl;
      map<char, int> m1;
      for (int j = 0; j < a.length(); j++)
      {
        m1[a[j]]++;
      }
      int distinct_chars_m1 = m1.size();
      map<char, int> m2;
      for (int j = 0; j < b.length(); j++)
      {
        m2[b[j]]++;
      }
      int distinct_chars_m2 = m2.size();
      return m1.size() + m2.size();
    }
    m[s[i]]++;
  }
  return m.size();
}
int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    string s;
    cin >> s;
    cout << ss (s) << endl;
  }
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     for (int i = 0; i < 200000; i++)
//     {
//       cout <<'a';
//     }
    
//     return 0;
// }