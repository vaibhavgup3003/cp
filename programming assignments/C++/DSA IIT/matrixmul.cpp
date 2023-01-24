#include<bits/stdc++.h>
using namespace std;

#define llint long long int
int main()
{
    llint t;
    cin >> t;
    while (t--)
    {
    int a[10][10], b[10][10], c[10][10];
    {
        for(int i=0; i<10; i++)
        {
           for(int j=0; j<10; j++)
           {
             cin >> a[i][j];
           }
        }
       for(int i=0; i<10; i++)
        {
           for(int j=0; j<10; j++)
           {
             cin >> b[10][10];
           }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                c[i][j] = a[i][j] * b[j][i];
            }
        }
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                cout << c[i][j] << " ";
            }
            cout << "\n";
        }
    }
    }
}