#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<string> s;
    s.insert("abs");
    s.insert("adfa");
    s.insert("bcd");
    s.find("abs"); // this also return iterator here this is the only way to access a element in set.
    cout << *s.find("abc"); // this line will give "segmentation fault" error
    cout << *s.find("abs");
    for (auto it = s.begin(); it!=s.end(); ++it)
    {
        cout << (*it) << endl;
    }
    // sets store unique elements in it. time complexity of eack operation of set is log(n)
    s.erase("adfa"); // it can take iterator also
    s.clear();

    // ** here we cannot count the frequency
// unordered map is same as unordered map.
// in unordered sets and maps complex data types such as pairs cannot be used.
// * multisets are the substitute of priority queue
// multiset can store same value multiple times in sorted order.
// multiset<int> l;


}