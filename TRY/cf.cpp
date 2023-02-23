// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long int
// #define lll int64_t
// #define ld long double
// #define vi vector<int>
// #define PI 4.0*atan(1.0)
// #define vvi vector<vector<int>>
// #define vll vector<ll>
// #define vecinp for(auto&i:v)cin>>i;
// #define vs vector<string>
// #define vii vector<pair<int,int>>
// #define sq(x) (x)* (x)
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//       int n; cin >> n;
//       string s; cin >>s;
//       if(s[0] == '0'){
//         if(s[1]=='-')
//         s[0]='-';
//         else if(s[1]=='+')
//         s[0]='+';
//         else
//         s[0] = '0';
//       }
//       if(s[n-1] == '0'){
//         if(s[n-2]=='-')
//         s[n-1]='-';
//         else if(s[n-2]=='+')
//         s[n-1]='+';
//         else
//         s[n-1] = '0';
//       }

//       for (int i = 1; i < n-1; i++)
//       {
//         if(s[i]=='0'){
//         if(s[i+1]=='+' && s[i-1] == '-')
//         s[i] = '0';
//         else if(s[i+1]=='+' && s[i-1] == '+')
//         s[i] = '+';
//         else if(s[i+1]=='-' && s[i-1] == '-')
//         s[i] = '+';
//         else if(s[i+1]=='0' && s[i-1] == '+')
//         s[i] = '+';
//         else if(s[i+1]=='0' && s[i-1] == '-')
//         s[i] = '-';
//         else if(s[i+1]=='+' && s[i-1] == '0')
//         s[i] = '+';
//         else if(s[i+1]=='-' && s[i-1] == '0')
//         s[i] = '-';
//         else
//         s[i]='0';
//         }
//       }
//       int cnt=0;
//       for (int i = 0; i < n; i++)
//       {
//         if(s[i]=='0')
//         cnt++;
//       }

//         cout  << s << endl;
//         cout << cnt << endl;

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
#define vecinp for(auto&i:v)cin>>i;
#define vs vector<string>
#define vii vector<pair<int,int>>
#define sq(x) (x)* (x)
// Aim: solve()
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
      int n;cin >> n;
      string s; cin >>s ;
      int cnt1 = 0, cnt2 = 0;

    int res = 0, eni = 0;

    bool fl = true;


    for(int i =0; i<n; i++)
    {
      if (s[i] == '0')
        cnt1++;
      if (s[i] == '0' && fl)
      {
        res = i;
        eni = i;
        fl = false;
      }
      else
      {
        if (s[i] == '0')
          eni = i;
        else
        {
          fl = true;
          if (res != 0 && eni != n - 1)
          {
            if ((s[res - 1] == '+' && s[eni + 1] == '-') || (s[res - 1] == '-' && s[eni + 1] == '+'))
           {
              if ((eni - res + 1) % 2 != 0)
                cnt2++;
            }
          }
          res = eni = 0;
        }
      }
    }
    if (cnt1 == n)
     cnt2 = cnt1;
    cout << cnt2 << endl;
    }
    return 0;
}
