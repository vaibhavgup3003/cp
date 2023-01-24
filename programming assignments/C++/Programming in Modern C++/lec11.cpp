#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int t; t=*a; *a=*b; *b=t;
}
int main()
{
    int i ;
    // cin >> i;
    int &j = i; //another way of referencing or storing address i. here ( &j = &i)
    // int& i=j; 
    // const int &j = 5;
    int c = 6;int d =10;
    swap(&c,&d);
    cout << c << " " << d << endl;
}