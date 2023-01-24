// #include <bits/stdc++.h>
// using namespace std;

// #define llint long long int
// int main()
// {
//     llint t;
//     cin >> t;
//     while (t--)
//     {
//         int m, n;
//         cin >> m >> n;
//         int arr[m][n];
//         int brr[m * n];
//         int cnt = 0;
//         for (int i = 0; i < m; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 cin >> arr[i][j];
//             }
//         }
//         int top = 0, bot = m, left = 0, right = n;
//         for (int j = 1; j <= m / 2 && j <= n / 2; j++)
//         {
//             for (int i = left; i <= right; i++)
//             {
//                 brr[cnt++] = arr[top][i];
//             }
//             for (int i = top + 1; i <= bot; i++)
//             {
//                 brr[cnt++] = arr[i][right];
//             }
//             for (int i = right - 1; i >= left; i--)
//             {
//                 brr[cnt++] = arr[bot][i];
//             }
//             for (int i = bot - 1; i > top; i--)
//             {
//                 brr[cnt++] = arr[i][left];
//             }

//             top++, bot--, left++, right--;
//         }
//         if (top == bot && left == right)
//         {
//             brr[cnt++] = arr[top][left];
//         }
//         else if (top < bot)
//         {
//             for (int i = top; i <= bot; i++)
//             {
//                 brr[cnt++] = arr[i][left];
//             }
//         }
//         else if (left < right)
//         {
//             for (int i = left; i <= right; i++)
//             {
//                 brr[cnt++] = arr[top][i];
//             }
//         }
//         for (int i = 0; i < m * n; i++)
//         {
//             cout << brr[i] << " ";
//         }
//     }
// }

#include <iostream>
#include <thread>
using namespace std;
void odd(){for(int i=1;i<=1000;i+=2)cout << i << " ";}
void even(){for(int i=2;i<=1000;i+=2)cout << i << " ";}

//AIM : 
int main(){
    thread t1(odd);
    t1.join();
    return 0;
}