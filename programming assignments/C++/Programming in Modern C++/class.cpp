#include<bits/stdc++.h>
using namespace std;
//  class cmplx
//  {
//     public:
//     double  re, im;
// double normal(){  // here no parameter is required because it automatically takes the declared variables.
//     return sqrt(re*re+im*im);
// }
// void print(){
//     cout << re << " " << im;
// }
//  };
// int main()
// {
//  cmplx c = {4.5, 5.6};
//  cout << c.normal() << endl;
// }
// now these print and normal are member function as they are in public so they can be accessed anywhere in the program but to access them outside their scope we need to use object.

// // CREATING A STACK
// class Stack{
//     public:
//     char arr[100]; int top_;
//     int empty() {return top_ == -1;}
//     int top() { return arr[top_];}
//     void push(char x) {arr[++top_]=x;}
//     void pop() { --top_;}
// };
// int main()
// {
//     Stack s; s.top_ = -1;
//     char str[10];
//     char strrev[10];
//     for (int i = 0; i < strlen(str); i++)
//     {
//         cin>>str[i];
//         s.push(str[i]);
//     }
//     cout<<"reversed string";
//     while(!s.empty())
//     {
//       cout << s.top(); s.pop();
//     }
// }

// # THIS POINTER
#include<bits/stdc++.h>
using namespace std;
class x{
    public: int m1,m2;
    void f(int k1, int k2){
        m1=k1;
        this -> m2 = k2;
        this * m1 = k1;
    }
}