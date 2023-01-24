#include<bits/stdc++.h>
using namespace std;
void btprint(int n){
    if(n==0)
    return;
    btprint(n-1); // this type of recursion is called backtracking.
    /*here the function is called first and is stored in the stack frame, when it hits the base condition 
    and returns then while returning it goes on executing the statements in the function*/
    cout<<n; // ** in backtracking the executing statements are after the function call.
}
void print(int i, int n){
    if(i>n)
    return;
    cout << i;
    print(i+1,n);
}
void reverse_array();
void reverse_array(int a[], int n){
    int* l = a;
    int* r = a+n-1;
    if(l>=r)
    return ;
    swap(*l, *r);
    reverse_array(l+1,*(r-1) );
}

void all_subs(int ind, vector<int> v){
    int a[n];int n;cin>>n;
    if(ind>=n){
        cout << v << endl;
        return;
    }
}

main(){
    // int n;cin>>n;
    // btprint(n);
    int a[]={1,2,3,4,5};
    reverse_array(a,5);
    for (int i = 0; i < 5; i++)
    {
        cout << i[a];
    }
    
}
