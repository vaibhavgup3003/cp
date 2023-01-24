// //1
// #include<bits/stdc++.h>
// using namespace std;
// #define llint long long int
// int main()
// {
//     llint a, b;
//     cout << "Enter the two numbers\n";
//     cin >> a >> b;
//     cout << "Enter the operation you want to perform on the numbers\n";
//     char x;
//     cin >> x;
//     switch(x){
//     case '+':
//     cout << "a + b is " << a + b << endl;
//     break;
//     case '-':
//     cout << "a - b is " << a - b << endl;
//     break;
//     case '*':
//     cout << "a * b is " << a * b << endl;
//     break;
//     case '/':
//     cout << "a / b is " << a / b << endl;
//     break;
//     case '^':
//     cout << "a ^ b is " << pow(a,b) << endl;
//     }
//     cout << (a>b?"Maximum of the two is a\n":"Maximum of the two is b\n");
// }

// // 2
// #include <bits/stdc++.h>
// using namespace std;

// #define long long int llint
// int factorialr(int num)
// {
//     if (num == 1 || num == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return (num * factorialr(num - 1));
//     }
// }
// int factorialnr(int num)
// {
//     int fact = 1;
//     for (int i = 0; i < num; i++)
//     {
//         fact = fact * i;
//     }
//     return fact;
     
// }
// int main()
// {

//     int n;
//     cout << "Enter the number you want the factorial of \n";
//     cin >> n;
//     cout << "The factorial of the entered number by recursive function is " << factorialr(n) << endl;
//     cout << "The factorial of the entered number by non-recursive function is " << factorialnr(n) << endl;
// }
 

 #include<bits/stdc++.h>
 using namespace std;
 
 #define long long int llint
 int main()
 {
    int n;
    cin >> n;
    int fact = 1;
    for (int  i = 0; i < n; i++)
    {
        
    fact = fact *i;
    }
    
 }


