// #include<bits/stdc++.h>
// using namespace std;
// #define PI 4.0*atan(1.0)
// class cylinder{
//     public:
//     int length, radius;
//     double area(){
//         return 2* PI*radius*(radius + length);
//     }
//     double volume(){
//         return PI*pow(radius,2)*length;
//     }
// };
// int main(){
//     cylinder c1;
//     c1.radius = 1;
//     c1.length =4;
//     cout<<c1.volume() << " " << c1.area() << endl; 
// }

#include<bits/stdc++.h>
using namespace std;
class student{
    public:
    string roll;
    long int p,c,m;
    public:
    // student(string r, long int p, long int c, long int m){
    //     roll =r;p=p;c=c;m=m;
    // }
    double avg();
};
double student :: avg(){
    return p*c*m/3;
}
int main(){
    student s[5];
    string r;
    long int p,c,m;
    double average=0;
    for (int i = 0; i < 5; i++)
    {
        cin >> r>>p>>c>>m;
        s[i].roll = r;
        s[i].p = p;
        s[i].c = c;
        s[i].m = m;
        average= average + s[i].avg();
    }
    cout << average << endl;
}