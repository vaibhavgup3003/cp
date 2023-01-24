#include<bits/stdc++.h>
using namespace std;
void printBinary(int n){
    for (int i = 10; i >= 0; i--)
    {
        cout << ((n>>i)&1);
    }
    cout << endl;
    
}
int main(){
    // int a = 9;
    // int i =0;
    // if(a & (1<<i) == 0)  // to check if the bit is set or unset 
    // // take xor to toggle the bit
    // // take or to set bit 
    // // take and to unset bit a&(~(1<<i));
    // cout << "bit is unset\n";
    // else
    // cout << "bit is set\n";

    // to count the set bits
    // int cnt = 0;
    // for (int i = 31; i >=0 ; i--)
    // {
    //     if((a&(1<<i)) != 0)
    //     cnt++;
    // }
    // cout << cnt <<endl;
    // to convert upper case into lower case using bit manupulation
    // in upper case letter the fifth bit is unset whearas in lower case letters it is set;
    // so  to convert lower into upper case we just need to toggle the fifth bit
    // char c;
    // for (char i = 'A'; i <= 'E'; i++)
    // {
    //     printBinary(i);
    //     c= i^(1<<5);
    //     cout << c << " ";
    // }

    // to check given number is power of 2
    int x = 8;
    if(x&(x-1))
    cout << "No  is not power of 2 \n";
    else 
    cout << "Yes is power of 2 \n";


    // to unset till ith bit from lsb
    int b = 75;
    int i = 5;
    printBinary(b);
    cout << endl;
    // printBinary(b & (1<<(i+1) - 1));
    cout << __builtin_popcount(b) << endl;      // *   __builtin_popcount() count number of set bits in a integer

    // if n & (n-1) == 0 then n is a power of 2;

    // **   BITMASKING **
    // this is used to find the intersection of two types of data
    // data of each type is stored in the form of zero and ones in binary numbers;
    // & operation between those numbers gives the required output
    
    

    







    return 0;
}