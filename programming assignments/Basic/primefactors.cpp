#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n){
    if(n==1)
    return false;
    if(n==2||n==3)
    return true;
    if(n%3==0||n%2==0)
    return false;
    for (int i = 5; i*i<=n; i+=6)
    {
       if(n%i==0||n%(i+2)==0)
       return false;
    }
       return true;
    
}
void prime_factor_naive(int n){
    for (int i = 2; i <n; i++)
    {
       if(isPrime(i)){
        int x =i;
        while(n%x==0){
        cout << i << " ";
        x*=i;
        }
       }
    }
}
void prime_factor_efficient(int n){
    if(n<=1)return;
    for (int i = 2; i*i<=n; i++)
    {
        while(n%i==0){
            cout<<i<<" ";
            n = n/i;
        }
    }
    if(n>1)
    cout << n <<" ";
}
void divisors(int n){
    int i;
    for (i = 1; i*i<=n; i++)
    {
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    for (; i>=1; i--)
    {
        if(n%i==0){
            cout<<n/i<<" ";
        }
    }
    
}
main(){
    int n;cin>>n;
    divisors(n);
}