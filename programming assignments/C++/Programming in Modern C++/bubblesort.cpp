#include <iostream>
using namespace std;
bool issorted;
void bubblesort(int *A, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        issorted = true;
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j] > A[j + 1])
            {
                int temp;
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
                issorted = false;
            }
        }
        if (issorted)
        {
            return;
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    bubblesort(A, n);
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }
}