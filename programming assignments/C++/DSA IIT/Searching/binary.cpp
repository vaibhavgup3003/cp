#include <bits/stdc++.h>
using namespace std;
int iterative_binary_search(int a[], int n, int k)
{ // TC = Olog(n) & AS = O(1)
    sort(a, a + n);
    int low = 0, high = n - 1;
    int i = 1;
    while (low <= high)
    {
        if (low > high)
            return -1;
        int mid = (low + high) / 2;
        if (a[mid] == k)
        {
        //     while (a[mid - i] == k)
        //     {
        //         i++;
        //     }
        return mid - i+1;
        //     int i = 1;
        }
        else if (a[mid] > k)
            high = mid - 1;
        else low = mid + 1;
    }
    return -1;
}
int recursive_binary_search(int a[], int low, int high, int k)
{
    // TC = Olog(n) & AS = O(log(n)) // recursion requires additional space to store the function calls.
    int mid = (low + high) / 2;
    if (a[mid] == k)
        return mid;
    else if (a[mid] > k)
        recursive_binary_search(a, low, mid - 1, k);
    else
        recursive_binary_search(a, mid + 1, high, k);
}

main()
{
    int a[] = {10, 12, 14, 32, 32, 32, 32,32, 43, 54, 54, 54, 54};
     cout << iterative_binary_search(a, 13, 32);
    for (int i = 0; i < 11; i++)
    {
        cout << a[i] << " ";
    }
    
}