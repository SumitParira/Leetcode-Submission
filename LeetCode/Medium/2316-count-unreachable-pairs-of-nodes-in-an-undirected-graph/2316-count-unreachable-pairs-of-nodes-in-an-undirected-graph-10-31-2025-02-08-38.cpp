class Solution {
public:

    int dfs(int i,unordered_map<int,vector<int>> &adj,vector<bool> &visited,int &size){
        size+=1;
        visited[i]=true;
        for(auto u:adj[i]){
            if(!visited[u])
             dfs(u,adj,visited,size);
        }
        return size;
    }

    long long countPairs(int n, vector<vector<int>>& edges) {
          unordered_map<int,vector<int>> adj;
          for(auto vec:edges){
            int u=vec[0];
            int v=vec[1];
            adj[u].push_back(v);
            adj[v].push_back(u);
          }

          long long result=0;
          int currSize=n;

          vector<bool>visited(n,false);

          for(int i=0;i<n;i++){
            int size=0;
                if(!visited[i]){
                    dfs(i,adj,visited,size);
                    result+=1ll*size*(currSize-size);
                    currSize-=size;
                }
          }
          return result;
    }
};