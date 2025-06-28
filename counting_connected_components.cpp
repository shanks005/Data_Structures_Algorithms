class Solution {
  public:

  vector<vector<int>>buildGraph(int V,vector<vector<int>>&edges){
    vector<vector<int>>adj(V);
    for(auto edge:edges){
      int u=edge[0];
      int v=edge[1];
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
    return adj;
  }
  void dfs(int node,vector<vector<int>>&adj,vector<bool>&vis,vector<int>&component){
    vis[node]=true;
    component.push_back(node);
    for(int neighbour:adj[node]){
      if(!vis[neighbour]){
        dfs(neighbour,adj,vis,component);
      }
    }
  }
  int findNumberOfComponent(int V, vector<vector<int>> &edges){
    vector<vector<int>>adj=buildGraph(V,edges);
    int c=0;
    vector<bool>visit(V,false);

    for(int i=0;i<V;i++){
      if(!visit[i]){
        vector<int>component;
        dfs(i,adj,vis,component);
        c++;
      }
    }
    return c;
  }
};
