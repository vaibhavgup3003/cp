#include<iostream>
#include<string> // including cstring here doesn't make any difference cstring is a array of characters while string is a data type
using namespace std;
int main()
{
    string str1 = "Hello ";
    string str2 = "World";
    string str  = str1 + str2;
    cout << str << endl;
}