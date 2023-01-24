#include<bits/stdc++.h>
using namespace std;
int main(){
    // properties of xor

    // x^y^z = x^z^y = y^x^z;

    // swaping numbers using xor
    int a=5, b=6;
    a= a^b;
    b = b^a;  //b-->a
    a = a^b;  //a-->b
    cout << a<< " "<< b;
    return 0;
}