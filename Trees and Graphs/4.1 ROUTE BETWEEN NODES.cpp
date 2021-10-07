Solution for **4.1 ROUTE BETWEEN NODES**

//Simple BFS traversal

//Time complexity: O(N)
//Space complexity: O(N)
`#include<bits/stdc++.h>
using namespace std;

bool checkPath(vector<vector<int>> &graph, int s, int t){
    if(s==t){
        return true;
    }
    int n=graph.size();
    queue<int> q;
    vector<int> vis(n,0);
    q.push(s);
    vis[0]=1;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        for(auto x: graph[node]){
            if(x==t){
                return true;
            }
            if(!vis[x]){
                q.push(x);
                vis[x]=1;
            }
        }
    }
    return false;
}`