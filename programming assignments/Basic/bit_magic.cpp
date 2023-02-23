#include<bits/stdc++.h>
using namespace std;
int odd_times(int a[], int n);
int odd_times(int a[], int n){
    int res=0;
    for (int i = 0; i < n; i++)
    {
        res = res^a[i];
    }
    return res;
}
int occurence(int a[], int n){
    int res=0;
    for (int i = 1; i <= n; i++)
    {
        res = res^i;
    }
    for (int i = 0; i < n-1; i++)
    {
        res = res^a[i];
    }
    return res;
}
void power_set(string s){
    int n = s.size();
    int pow_size = pow(2,n);
    for (int i = 0; i < pow_size; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i&(1<<j)!=0)
            cout << s[j];
        }
        cout << endl;
        
    }
    
}
main(){
    int a[] = {1,2,5,4,8,7,6};
    string s; cin >>s;
    // cout << odd_times(a,11) << endl;
    // cout << occurence(a,8) <<endl;
    power_set(s);
    int n;cin >> n;
       string a,b; cin >>a>>b;
       cout << ((bitset<100>(a) & bitset<100>(b)).count() ? "NO\n" : "YES\n");
}
// find the element which is occuring odd number of times.
// find the missing no if every no occurs exactly once in a array
// to find power set of a string i.e all the subsets of the string