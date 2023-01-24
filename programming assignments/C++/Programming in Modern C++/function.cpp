#include<bits/stdc++.h>
using namespace std;
#include<iostream>
using namespace std;

// Function prototype                  // if the function is not written before main then this ensures that the function can is declared and can be found after main.
// type function-name (arguments);
// int sum(int a, int b); //--> Acceptable
// int sum(int a, b); //--> Not Acceptable 
int sum(int, int); //--> Acceptable        
// void g(void); //--> Acceptable 
void g(); //--> Acceptable 

int main(){
    int num1, num2;
    cout<<"Enter first number"<<endl;
    cin>>num1;
    cout<<"Enter second number"<<endl;
    cin>>num2;
    // num1 and num2 are actual parameters
    cout<<"The sum is "<<sum(num1, num2);
    g();
    return 0;
}

int sum(int a, int b){
    // Formal Parameters a and b will be taking values from actual parameters num1 and num2.
    int c = a+b;
    return c;
}
void g(){
    cout<<"\nHello, Good Morning";
}

// ** inline function is used when a short function is used many times in a program. 
// inline function expands the code at the function call insted of function running.
// but if the function is large then using inline is not worthy. 