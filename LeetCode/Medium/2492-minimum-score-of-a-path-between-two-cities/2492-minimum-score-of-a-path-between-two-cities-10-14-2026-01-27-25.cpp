class Solution {
public:
    int minScore(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int, int>>> adj(n+1);
       
        for(auto & r:roads){
            int u=r[0];
            int v=r[1];
            int wt=r[2];

            adj[u].push_back({v,wt});
            adj[v].push_back({u,wt});
        }

        vector<bool> visited(n+1,false);
        queue<int> q;
        q.push(1);
        int ans = INT_MAX;
        visited[1]=true;

        while(!q.empty()){
            int node = q.front();
            q.pop();

            for(auto[next,wt]:adj[node]){
                 ans=min(wt,ans);
                if(!visited[next]){
                   
                    visited[next]=true;
                    q.push(next);
                }
            }
        }
        return ans;

    }
};