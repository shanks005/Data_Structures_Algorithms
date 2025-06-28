class Solution {
  public:
    
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfs(vector<vector<int>> &adj) {
        vector<int>vis(adj.size(),false);
        queue<int>res;
        vector<int>res2;
        vis[0]=true;
        res.push(0);
        while(!res.empty()){
            int s=res.front();res.pop();
            res2.push_back(s);
            for(auto u:adj[s]){
                if(vis[u]){
                    continue;
                }
                vis[u]=true;
                res.push(u);
            }
        }
        return res2;
    }
};
