class Solution {
public:

int mod=1e9+7;
    int poww(int x,int y){
        int res=1;
        while(y){
            if(y&1){
                res=1ll*res*x % mod;
            }
            x=1ll*x*x %mod;
            y>>=1;
        }
        return res;
    }
    int solve(vector<vector<int>> &adj,int x,int p){
        int res=0;
        for(auto &it : adj[x]){
           if(it!=p){
            res=max(res,1+solve(adj,it,x));
           }
        }
        return res;
    }
    int assignEdgeWeights(vector<vector<int>>& edges) {
        int n=edges.size()+1;
        vector<vector<int>> adj(n+1);
        for(auto it : edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        int max_depth=solve(adj,1,0);
        return poww(2,max_depth-1);
    }
};