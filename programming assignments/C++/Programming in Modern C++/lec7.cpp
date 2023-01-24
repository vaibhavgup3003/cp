#include<iostream>
#include<algorithm>  // for sort function
#include<stdlib.h>  // for binary search function
using namespace std;
bool compare(int i, int j)
{
return (i>j);
}
int main()
{
int arr[] = {25, 21, 64, 82, 21, 0, 88 };
int sortedarr[] = {1,3,5,7,9,11,13,15,17,19}, k=15;
// start ptr, end ptr, function ptr
// sorting array in descending order
sort(arr, arr+7, compare);
for (int i = 0; i < 7; i++)
{
    cout << arr[i] << " ";
}
// just remove compare function to sort in ascending order.
// binary search in sortedarr
if(binary_search(sortedarr, sortedarr+10, k ))
cout << "found\n";
else
cout << "not found\n";

// replace and rotate function in the algorithm library
replace(arr, arr+7, 0, 89);
rotate(arr, arr+5, arr+7);
for (int i = 0; i < 7; i++)
{
    cout << arr[i] << " ";
}




}