class Solution {
  public:
    void dfsRec(vector<vector<int>>&adj,vector<int>&res,vector<int>&vis,int s){
        vis[s]=true;
        res.push_back(s);
        for(int i: adj[s]){
            if(!vis[i]){
                dfsRec(adj,res,vis,i);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        vector<int>vis(adj.size(),false);
        vector<int>res;
        dfsRec(adj,res,vis,0);
        return res;
        // Code here
    }
};
