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