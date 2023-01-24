#include<bits/stdc++.h>
using namespace std;
class integer{
    private: int x;
    public:
    void get(){
        cin >> x;
    }
    void display(){
        cout << x;
    }
    void sum(integer& b);
};
void integer :: sum (integer& b){
    x +=b.x;
}
main(){
    integer a,b;
    a.get();
    b.get();
    a.display();
     cout << " ";
    b.display();
     cout << " ";
     a.sum(a);
     cout << endl;
     a.display();
}