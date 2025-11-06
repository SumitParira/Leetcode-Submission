class Solution {
public:

void dfs(int node ,unordered_map<int,vector<int>> &adj,int component_id,vector<int> &componentId,unordered_map<int,set<int>> &mp,vector<bool> &visited){
    visited[node]=true;
    mp[component_id].insert(node);
    componentId[node]=component_id;

    for(int &ngbr:adj[node]){
        if(!visited[ngbr]) dfs(ngbr,adj,component_id,componentId,mp,visited);
    }


}

    vector<int> processQueries(int c, vector<vector<int>>& connections, vector<vector<int>>& queries) {
        unordered_map<int,vector<int>> adj;

        for(auto it:connections){
            int u=it[0];
            int v=it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        vector<bool>visited(c+1,false);
        vector<int> componentId(c+1);
        unordered_map<int,set<int>>mp;

            for(int node=1;node<=c;node++){
                    if(!visited[node]){
                        int component_id = node;
                        dfs(node,adj,component_id,componentId,mp,visited);
                    }
            }

            vector<int> result;

            for(auto &query:queries){
                int type=query[0];
                int node=query[1];

                if(type==1) {
                    int id = componentId[node];

                    if(mp[id].count(node)) result.push_back(node);
                    else {
                        if(!mp[id].empty()) result.push_back(*mp[id].begin());
                        else result.push_back(-1);
                    }
                }else{
                    int id = componentId[node];
                    mp[id].erase(node);
                }
            }
        return result;
    }
};