#include<bits/stdc++.h>
using namespace std;
void func1(){
    cout << "ghanta" ;
}
main(){
//     list<int> l;
//     l.push_front(1);
//     l.push_front(2);
//     l.push_back(2);
//     for(int i:l){
//         cout << i <<" ";
//     }
//     l.erase(l.begin());
//     l.size();

std::thread t1(func1);
t1.join();
}

