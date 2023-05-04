#include<bits/stdc++.h>
using namespace std;
#define int long long
#define lll int64_t
#define ld long double
#define vi vector<int>
#define PI 4.0*atan(1.0)
#define vvi vector<vi>
#define vll vector<ll>
#define vecinp for(auto&i:v)cin>>i;
#define vs vector<string>
#define vii vector<pair<int,int>>
#define sq(x) (x)* (x)
bool solve(int oi, int key, vector<vi> &ans, vector<vi> &dp);
int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // cout.tie(NULL);
 
    // int t = 1;
    int t; cin >> t;
    while (t--)
    {
        int n, m, key;
        cin >> n >> m >> key;key++;
        int sum = 0;
        vector<vi> ans(n + 1, vi(m + 1));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                cin >> ans[i][j];
                sum += ans[i][j];
            }
 
        vector<vi> dp(n + 1, vi(m + 1));
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= m; j++)
            {
                dp[i][j] = ans[i][j];
                dp[i][j] += dp[i][j - 1];
                dp[i][j] += dp[i - 1][j];
                dp[i][j] -= dp[i - 1][j - 1];
            }
        if (sum < key)
        {cout << -1 << endl;
            continue;}
        int low = 0, high = max(n, m), mid;
        while (low < high)
        {
            mid = (low + high) / 2;
            if (solve(mid, key, ans, dp)) high = mid;
            else low = mid + 1;
        }
        cout << low << endl;
    }
}
bool solve(int oi, int key, vector<vi> &ans, vector<vi> &dp)
{
    int n = ans.size() - 1;
    int m = ans[0].size() - 1;
    bool flag = false;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            if (ans[i][j] == 0)continue;
            int a1 = max(1LL, i - oi), b1 = max(1LL, j - oi), c1 = min(n, i + oi), d1 = min(m, j + oi);
            // int b1 = max(1LL, j - oi);
            // int c1 = min(n, i + oi);
            // int d1 = min(m, j + oi);
            int sum = dp[c1][d1] - dp[c1][b1 - 1] - dp[a1 - 1][d1] + dp[a1 - 1][b1 - 1];
            if (sum >= key)flag = true;}
    return flag;
}