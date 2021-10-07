Solution for **4.7 BUILD ORDERS**

//Simple Topological sort

//Time complexity: O(N)
//Space complexity: O(N)

`#include<bits/stdc++.h>
using namespace std;
void creategraph(int n, vector<pair<int,int>> dependencies,vector<int> adj[]){
    for(auto x:dependencies){
        adj[x.first].push_back(x.second);
    }
}
void dfs(int s, vector<int> adj[], stack<int> &topo, vector<int> &vis){
    vis[s]=1;
    for(auto x:adj[s]){
        if(!vis[x]){
            dfs(x,adj,topo,vis);
        }
    }
    topo.push(s);
}
vector<int> topoSort(int V, vector<int> adj[]) 
{
    stack<int> topo;
    vector<int> vis(V,0);
    for(int i=0;i<V;i++){
        if(!vis[i]){
            dfs(i,adj,topo,vis);
        }
    }
    vector<int> toposort;
    while(!topo.empty()){
        toposort.push_back(topo.top());
        topo.pop();
    }
    return toposort;
}

int main(){
 
    int n=6;
    vector<pair<int,int>> dependencies;
    dependencies={{0,3},{5,1},{1,3},{5,0},{3,2}};
    vector<int> adj[n];
    creategraph(n,dependencies,adj);
    vector<int> result=topoSort(n,adj);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    // int test;
    // cin>>test;
    // while(test--){
        
    // }
    return 0;
}
`