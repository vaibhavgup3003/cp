#include<bits/stdc++.h>
using namespace std;
bool ifpos(int a){
    return (a>=0);
}
int main(){
    int n;cin>>n;
    vector<int> v(n);
    for(auto &i:v){
cin >>i;
    }
    // sum of a vector
    int sum = accumulate(v.begin(), v.end(), 0 /*initial sum of the vector*/);
    // to find the count of a element in a vector
    int ct = count(v.begin(), v.end(), 5 /*the num whose count is to be found*/);
    // to find the position of a element in a vector (returns address)
    auto it =  find(v.begin(), v.end(), 4);
    reverse(v.begin(),v.end()); //can also be used to reverse a string
    // cout << *it << endl;/
    // cout << sum << endl;
    
    // returns true if ifpos return true for all elements of the vector v;
    cout << all_of(v.begin(), v.end(), ifpos) << " ";

    // returns true if ifpos return true for all elements of the vector v;
    cout << any_of(v.begin(), v.end(), ifpos) << " ";

    // returns true if ifpos return true for none of the elements in vector v;
    cout << none_of(v.begin(), v.end(), ifpos) << " ";


    return 0;
}