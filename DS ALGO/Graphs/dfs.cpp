#include<bits/stdc++.h>
using namespace std;
/*
what we have to do is just traverse from the initial node and then goes on travelling through the consecutive nodes till we reach a dead end.
*/

/*
you are given a ajacency list and a initial noded 
*/
vector<int> dfs (int n, vector<int>adj, vector<int> ls){
   // n is the number of nodes
   vector<int> vis(n,0);
   for(auto)
    
    

}
int main(){
     int n,m;cin>>n,m;
     vector<int> adj[n+1];
     for(int i=0; i<n; i++){
        int u,v;
        adj[u].push_back(v);
        adj[v].push_back(u);
     }
    // dfc traversal
    vector<int> visited(n,0);
    int init;

    return 0;
}