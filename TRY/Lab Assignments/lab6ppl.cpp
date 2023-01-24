// #include<bits/stdc++.h>
// using namespace std;
// string hexa(int a){
//     int x = a;
//     string ans;
//     stack<char> s;
//     while(x)
//     {
//        int t= x%16;
//         if(t<10)
//         s.push(t);
//         else if(t==10)
//         s.push('A');
//         else if(t==11)
//         s.push('B');
//         else if(t==12)
//         s.push('C');
//         else if(t==13)
//         s.push('D');
//         else if(t==14)
//         s.push('E');
//         else if(t==15)
//         s.push('F');
//         x/16;
//     }
//     cout << "Entered number in hexadecimal is: ";
//     while(!s.empty()){
//     ans = ans + s.top(); s.pop();}
//     return ans;
// }
// int main ()
// {
//     int n;
//     cout << "Enter the number: ";
//     cin >> n;
//     int a = n;
//     int rem = 0, sum = 0;
//     while(a!=0){
//       rem = a%10;
//       sum += pow(rem,3);
//       a=a/10;
//     }
//     if(sum == n)
//     cout<< "Entered number is a angstrong number\n";
//     else
//     cout<< "Entered number is not a angstrong number\n";   
//     cout << "Entered number in hexadecimal is :  "<< hexa(n);
// }

#include<bits/stdc++.h>
using namespace std;
double factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return (num * factorial(num - 1));
    }
}
int main()
{
    int x; cin >> x;
    double z=0;
    // cout << factorial(5)<<endl;;
    // cout << factorial(6);
    for(int i = 0; i <= 5; i++){
        int den=2*i;
        int num = pow(x,i);
        z += (int)(pow(-1,i))*(float)(num/factorial(den));
    }
    cout << z;
    // cout << z << endl;
}