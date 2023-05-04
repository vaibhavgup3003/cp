#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long  t;
    cin >> t;
    while (t--)
    {
        long long  n;
        cin >> n;                
        string s;
        cin >> s;
        // long long  n = s.length();

        string s1="", s2="";
        char l = '1';
        s1 = s1+ l;
        for (long long  i = 0; i < n; i++)
        {
            if (s[i] == s1[i])
                s1 = s1 + '0';
            else
                s1 = s1 + '1';
        }
        char m = '0';
         s2 = s2 + m;
        // s2+=l;
        for (long long  i = 0; i < n; i++)
        {
            if (s[i] == s2[i])
                s2 = s2 + '0';
            else
                s2 = s2+ '1';
        }
        // cout << n << " "  << s1 << " " << s2 << endl;
        long long  cnts1 = 0, cnts2 = 0;
        for (long long  i = 0; i < n; i++)
        {
            if (s1[i] == '1')
                cnts1++;
            if (s2[i] == '1')
                cnts2++;
        }

        cout << max(cnts1, cnts2) << endl;
    }
}