#include <bits/stdc++.h>
using namespace std;
bool iscycledetected(int node,int parent,vector<int>&vis,vector<int>adj[]){
    vis[node]=1;
    for(auto it:adj[node]){
        if(!vis[it]){
            if(iscycledetected(it,node,vis,adj)) return true;
        }else if(it!=parent){
            return true;
        }
    }
    return false;
}
bool iscycle(int v,vector <int> adj[]){
    vector<int> vis(v,0);
    for (int i = 0; i < v; i++){
        if(!vis[i]){
           if( iscycledetected(i,-1,vis,adj)) return true;
           }
        }
        return false;
    }
int main(){
  int V = 5;
  int E = 5;
  vector < int > adj[V];

  adj[0].push_back(1);
  adj[1].push_back(0);

  adj[1].push_back(2);
  adj[2].push_back(1);

  adj[1].push_back(4);
  adj[4].push_back(1);

  adj[4].push_back(3);
  adj[3].push_back(4);

  adj[2].push_back(3);
  adj[3].push_back(2);

  cout<<iscycle(V,adj);
    return 0;
}