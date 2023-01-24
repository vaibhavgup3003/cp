#include<bits/stdc++.h>
using namespace std;
// const int N = 1e7;
// print all the prime upto 10^7
// implementing sieve of erostosthenes
// mark 0 and 1 as non-prime
// mark all the multiples of the prime as non prime
//TC = nlogn;
vector<int> sieve_of_erostosthenes(int n){
vector<int>res;
vector<bool> isPrime(n,1);    // this initiallised all the elements in vector as 1
 isPrime[0] = isPrime[1] = 0;      // initiallising 0 and 1 ans non- prime
    for (int i = 2; i < n; i++)       //multiples of prime as non prime
    {
        if(isPrime[i]==1){
            for (int j = 2*i; j < n; j+=i)
            {
                isPrime[j] = 0;
            }   
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(isPrime[i] == 1){
            res.push_back(i);
        }
    }
    return res;
}
int main(){
   int n;cin>>n;
   vector<int>res = sieve_of_erostosthenes(n);
   
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
    
    return 0;
}