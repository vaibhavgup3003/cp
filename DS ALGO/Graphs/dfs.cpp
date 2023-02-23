#include<bits/stdc++.h>
using namespace std;
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