/* ** Stable sorting algo do not changes the orignal order of the elements
   while unstable changes the  order.

Bubble, Insertion, Merge Sorts are Stable
   Selection, Quick, Heap are Unstable */

#include <iostream> //TC = O(n^2), AS = O(1)
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
// Selection Sort (space optimized : do not require extra space for sorting or(in-place), stable)
// select min element and place it at first position
void selection_sort(int a[], int n) // TC = O(n^2), AS = O(1)
{
  for (int i = 0; i < n - 1; i++)
  {
    int min_ind = i;
    for (int j = i + 1; j < n; j++)
    {
      if (a[j] < a[min_ind])
        min_ind = j;
    }
    swap(a[i], a[min_ind]);
  }
}
// insert the next element at it's correct place.
void insertion_sort(int a[], int n) //(in-place), stable ,TC = O(n^2), AS = O(1)
{
  for (int i = 1; i < n; i++)
  {
    int key = a[i];
    for (int j = i - 1; j >= 0, a[j] > key; j--)
    {
      swap(a[j + 1], a[j]);
    }
  }
}

void heapify(int arr[], int n, int i)
{
  int largest = i;
  int left = 2 * i;
  int right = 2 * i + 1;

  if (left <= n && arr[left] > arr[largest])
    largest = left;
  if (right <= n && arr[right] > arr[largest])
    largest = right;

  if (largest != i)
  {
    swap(arr[largest], arr[i]);
    heapify(arr, n, largest);
  }
}

void heapsort(int arr[], int n)
{
  int size = n;
  while (size > 1)
  {
    swap(arr[1], arr[size - 1]);
    size--;
    heapify(arr, size, 1);
  }
}

// divide and conquer
void merge_sort(int a[], int b[], int an, int bn) // not in-place , stable  TC = O(nlog(n)), AS = O(n)
{
  // with for loop
  int cn = an + bn;
  int c[cn];
  int i, j, k;
  for (i = 0, j = 0, k = 0; i < an && j < bn && k < cn; k++)
  {
    if (a[i] > b[j])
    {
      c[k] = b[j];
      j++;
    }
    else
    {
      c[k] = a[i];
      i++;
    }
  }

  while (i < an)
  {
    c[k] = a[i];
    i++;
    k++;
  }
  while (j < bn)
  {
    c[k] = b[j];
    j++;
    k++;
  }
  for (int i = 0; i < an + bn; i++)
  {
    cout << c[i] << " ";
  }
  // with while loop
  int i = 0, j = 0;
  while (i < an && j < bn)
  {
    if (a[i] <= b[j])
    {
      cout << a[i] << " ";
      i++;
    }
    else
    {
      cout << b[j] << " ";
      j++;
    }
  }
  while (i < an)
  {
    cout << a[i] << " ";
    i++;
  }
  while (j < bn)
  {
    cout << b[j] << " ";
    j++;
  }
}
int main()
{

  // int A[] = {9,6,5,3,65,94,4,7};
  int a[] = {1, 2, 3, 4, 5};
  int b[] = {7, 8, 9, 10, 11, 12, 13};
  int an = sizeof(a) / sizeof(int);
  int bn = sizeof(b) / sizeof(int);
  merge_sort(a, b, an, bn);
  // int n= sizeof(A)/sizeof(int);
  // for (int i = 0; i < n; i++)
  // {
  //     cout << A[i] << " ";
  // }
  // cout << "\n";
  // bubblesort(A, n);
  // for (int i = 0; i < n; i++)
  // {
  //     cout << A[i] << " ";
  // }
  // cout << "\n";
  // selection_sort(A,n);
  // for (int i = 0; i < n; i++)
  // {
  //     cout << A[i] << " ";
  // }
  // cout << "\n";
  // heapsort(A,n);
  // for (int i = 0; i < n; i++)
  // {
  //     cout << A[i] << " ";
  // }
  // cout << "\n";
  // insertion_sort(A, n);
  // for (int i = 0; i < n; i++)
  // {
  //     cout << A[i] << " ";
  // }
  cout << "\n";
}
