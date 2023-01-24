#include <iostream>
using namespace std;
 
// struct employee   // or we can use
typedef struct employee
{
    /* data */
    int eId;
    char favChar;
    int salary;
}ep;   // by using typedef we  can use ep instead of typedef struct.

union money
{
    /* data */
    int rice;
    char car;
    float pounds;
};         // by union i can use any one of these at a time and total memory allocated for these data type is 4 bytes that is of integers.

enum Meal             // enum declares  breakfast as 1, lunch as 2 and dinner as 3 an so on.
{
    breakfast,
    lunch,
    dinner
};
 
int main()
{
    Meal m1 = dinner;       // now meal is a data type
    if (m1 == 2)
    {
        cout << "The value of dinner is " << dinner << endl;
    }
    union money m1;

     struct employee Harry;
    Harry.eId = 1;
    Harry.favChar = 'c';
    Harry.salary = 120000000;
    cout << "eID of Harry is " << Harry.eId << endl;
    cout << "favChar of Harry is " << Harry.favChar << endl;
    cout << "salary of Harry is " << Harry.salary << endl;
    return 0;

}

 
