#include<bits/stdc++.h>
using namespace std;
bool solve(vector<int> &v, int n, int val){
    for (int  i = 0; i < n; i++)
    {
        if(binary_search(v.begin(), v.end(), val-v[i]) == true)
        return true;
    }
    return false;
    

}
int main(){
    int n;cin >> n;
    int val;cin >> val;
    vector<int > v(n);
    for(auto & i: v) {
        cin >> i;
    }           
    cout << solve(v, n , val)<< endl;
    
    
    return 0;
}

#include<bits/stdc++.h>
using namespace std;
// using last element as pivot now

int Partition(int *array, int l, int r)
{
    //int middle = l + ((r - l + 1)  / 2) - 1;
    int n = r - l;
    int middle = ((n - (n % 2)) / 2) + l;
    //int middle = (r + l)/2;

    // order left and middle value
    if(array[l] > array[middle]) {
        swap(array, l, middle);
    }
    // order left and right values
    if(array[l] > array[r]) {
        swap(array, l, r);
    }
    // order middle and right values
    if(array[middle] > array[r]) {
        swap(array, middle, r);
    }
    swap(array, l, middle);
    int p = array[l];
    int i = l + 1;
    int end = 0;
    int j;
    for (j = l + 1; j <= r; j++)
    {
        if (array[j] < p){
            int k = array[j];
            array[j] = array[i];
            array[i] = k;
            i++;
        }
        end = j;
    }
    //swap A[l] and A[i-1]
    int a = array[l];
    array[l] = array[i-1];
    array[i-1] = a;
    QuickSort(array, l, i - 2);
    QuickSort(array, i, end);
}

int QuickSort(int *array, int l, int r)
{
    if (l < r)
    {
        Partition(array, l, r);
        comparisons = comparisons + (r - l);
    }
    else
    {
        return 0;
    }
}
int main()
{
    if(read_file_to_array(DATA_FILE, array, TOTAL_NUM) != 0)
    {
        printf("can't read number from file");
        return -1;
    }
    else
    {
        QuickSort(array, 0, TOTAL_NUM - 1);
    }
    comparisons = comparisons - 1;
    printf("%i and %i" ,comparisons, array[TOTAL_NUM - 1]);
}

#include <iostream>
using namespace std;

// A utility function to swap two elements
void swap(int arr[], int i, int j)
{
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
}

/* This function takes last element as pivot, places
the pivot element at its correct position in sorted
array, and places all smaller (smaller than pivot)
to left of pivot and all greater elements to right
of pivot */
int partition(int arr[], int low, int high)
{
	// pivot
	int pivot = arr[high];

	// Index of smaller element and
	// indicates the right position
	// of pivot found so far
	int i = (low - 1);

	for (int j = low; j <= high - 1; j++)
	{
		// If current element is smaller
		// than the pivot
		if (arr[j] < pivot)
		{
			i++;
			swap(arr, i, j);
		}
	}
	swap(arr, i + 1, high);
	return (i + 1);
}

/* The main function that implements QuickSort
arr[] --> Array to be sorted,
low --> Starting index,
high --> Ending index
*/
void quickSort(int arr[], int low, int high)
{
	if (low < high)
	{
		// pi is partitioning index, arr[p]
		// is now at right place
		int pi = partition(arr, low, high);

		// Separately sort elements before
		// partition and after partition
		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
}

// Function to print an array
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";

	cout << endl;
}

// Driver Code
int main()
{
	int arr[] = { 10, 7, 8, 9, 1, 5 };
	int n = sizeof(arr) / sizeof(arr[0]);

	quickSort(arr, 0, n - 1);
	cout << "Sorted array: " << endl;
	printArray(arr, n);
	return 0;
}
