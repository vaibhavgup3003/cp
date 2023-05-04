#include<bits/stdc++.h>
using namespace std;
int iterative_binary_search(int a[], int n, int k)
{ // TC = Olog(n) & AS = O(1)
int cmpb=0;
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
        cmpb++;
        return mid - i+1;
        //     int i = 1;
        }
        else if (a[mid] > k)
            high = mid - 1,cmpb++;
        else low = mid + 1,cmpb++;
    }
    return -1;
}

// int ternary_search (vector<int> &v, int n, int k){
//     int l=0, h =n-1, mid1=l+h/3, mid2 = h-(h-l)/3;
//     while(h>=l){
//         if(l>h)
//         return -1;
//         if(v[mid1]==k){
//          return mid1;
//         }
//         if(v[mid2]==k)
//         return mid2;
//         if (k < v[mid1]) {
 
//             // The key lies in between l and mid1
//             return ternarySearch(l, mid1 - 1, key, ar);
//         }
//     }
// }

int ternarySearch(int l, int r, int key, int ar[])
{
    if (r >= l) {
        int mid1 = l + (r - l) / 3;
        int mid2 = r - (r - l) / 3;
        if (ar[mid1] == key) {
            return mid1;
        }
        if (ar[mid2] == key) {
            return mid2;
        }

        if (key < ar[mid1]) {
 
            return ternarySearch(l, mid1 - 1, key, ar);
        }
        else if (key > ar[mid2]) {
 
            return ternarySearch(mid2 + 1, r, key, ar);
        }
        else {
 
            return ternarySearch(mid1 + 1, mid2 - 1, key, ar);
        }
    }

    return -1;
}

int fake_coin(vector<int> &v){
    for(auto&i:v){
        
    }
}


int main(){

    return 0;
}