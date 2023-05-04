#include<bits/stdc++.h>
#define vecinp for(auto&i:v)cin>>i;
using namespace std;

bool comp(int a, int b){
    return a>b;
}
// global arrays are BY DEFAULT initiallised to zero
int main(){
int a[8];
    // int n;cin>>n;
    // vector<int> v(n);
    // vecinp
    // sort(v.begin(), v.end());
    
    for (int i = 0; i < 8; i++)
    {
        cin >> a[i];
    }

    sort(a,a+8 ,comp);
    /*LOWER BOUND 
    both bounds work in O(log(n));
     this return the address of the just larger number than the given number 
     if the number is present in the array then it returns the number itself.
    */
    int* ptrl = lower_bound(a,a+8,4);

    /*   UPPER BOUND 
      this the returns the address of the smallest element greater than the number 
      even if the number is found.

      returns garbage in case of largest number of the array
    */
    int * ptru = upper_bound(a,a+8,10);
        // cout << (*ptrl) << endl;
    for(auto &i: a){
        cout << i << " ";
    }
    return 0;
}