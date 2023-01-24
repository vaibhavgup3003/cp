#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
regex r("its");
// regex s("[abc]me"); // searches combination of ame,bme,cme sequentially
// regex_replace(s,r, " ");   // replace r in s with " ";


regex a("[0-9]");  //true if any number in 0-9 is present; use for a-z or A-Z;
regex b("[0123456789]");  // b is same as a;
regex c("^[0123456789]");  // none in 0-9 should match
regex d("[\t\r\n\f]");  //searches white space;
regex e("^[\t\r\n\f]"); //true if any char is found;

// to check repetition meta characters are used;
/*
x*: means match 'x' 0 or more times, i.e., any number of times

x+: means match 'x' 1 or more times, i.e., at least once

x? : means match 'x' 0 or 1 time

x{n,}: means match 'x' at least n or more times. Note the comma.

x{n} : match 'x' exactly n times

x{n,m}: match 'x' at least n times, but not more than m times.*/

regex f ("goat|rabbit|pig");  // matches either goat or rabbit or pig in a string
regex g ("^abc");   // matches abc in the begininig of string
regex g ("abc$");   // matches abc in the end of string

regex_match(s,r);   //matches r in s;

regex_search(s, r); 
// // returns true if r is found in s else false
string str; cin >>str;
regex w("WUB");
cout << regex_replace(str,w," ");
    return 0;
}