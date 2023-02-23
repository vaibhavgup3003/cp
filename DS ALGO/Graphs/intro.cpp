#include<bits/stdc++.h>
using namespace std;
int main()
/*
There are two ways to store a graph
1. Adjacency matrix : 
    In this we write the vertices in both rows and columns then write 1 in the block in which the edge is present.
*/

{
    int n, m;
    // n and m denotes the no. of nodes and no. of edges
    cin >> n >> m;
    // adjacency matrix for undirected graph
    // time complexity: O(n)
    int adjm[n+1][n+1];
    for(int i = 0; i < m; i++) 
    {
        int u, v;
        cin >> u >> v;
        adjm[u][v] = 1;
        adjm[v][u] = 1;  // this statement will be removed in case of directed graph
    }
/*
2. Adjacency list: 
   In the the adjacent nodes are stored in array of vectors and the size of the array is the number of nodes.
   Time complexity is O(2*e)
*/

    // adjacency list for undirected graph
    // time complexity: O(2E)
    vector<int> adjl[n+1];
    for(int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adjl[u].push_back(v);
        adjl[v].push_back(u);
    }
    return 0;
}

