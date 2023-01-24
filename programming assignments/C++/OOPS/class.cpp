/* 1. Functions defined inside a class are by default inline
2. static data members are by default initiallised to 0 and only one copy of them is created 
irrespective of the number of objects created.
3. static member function can only access the static data member of the class. , it can be 
invoked with class name and the scope resolution operator.
4. 

*/



// C++ program to demonstrate accessing of data members
#include <bits/stdc++.h>
using namespace std;
class Geeks {
    // Access specifier
public:
    // Data  Members
    string geekname;
    // Member Functions()
    void printname() { cout << "Geekname is:" << geekname; }
    void get();  
};
void Geeks :: get(){
    cin >> geekname;
}
int main()
{
    // Declare an object of class geeks
    Geeks obj1;
    // accessing data member
    obj1.geekname = "Abhi";
    // accessing member function
    obj1.printname();
    return 0;
}


// There are 2 ways to define a member function:

//     Inside class definition
//     Outside class definition

// To define a member function outside the class definition we have to use the scope resolution :: operator along with class name and function name. 

void Geeks::printname()
{
    cout <<"Geekname is: "<<geekname;
}