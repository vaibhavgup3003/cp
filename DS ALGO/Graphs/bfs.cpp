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

     // bfs traversal;
     int init;
     cin >> init;
     vector<bool> visited(n,0);
     vector<int>bfs;
     queue<int> q;
     q.push(0); // pushing the initial node of the graph
     
                while(!q.empty()){
                    int node = q.front();
                   bfs.push_back(node);
                
                for(auto i:adj[node]){
                    if(visited[i]==0)
                    q.push(i),visited[i]=1;
                }
                }
                for(auto i:bfs){
                    cout << i << " ";
                                    }
            
    return 0;
}
