/*
Q. From a stair you can jump either a single step or two. Find total no. of ways you can reach the top of the stairs.
*/

/*
Soln.  firstly --> consider stairs as index.
       --> identify base case
       --> do all stuff acc to the problem

*/
#include<bits/stdc++.h>
using namespace std;
int ans(int n){
    if(n==1){
        return 1;
    }
    if(n==2){
        return 1;
    }
    return ans(n-1)+ans(n-2);
}
int main(){
  int n;cin>>n;cout << ans(n);
    return 0;
}