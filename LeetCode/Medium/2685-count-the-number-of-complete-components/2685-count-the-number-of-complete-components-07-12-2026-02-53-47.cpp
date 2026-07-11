class Solution {
public:
    int countCompleteComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
       for (auto &it : edges) {
            int u = it[0];
            int v = it[1];

            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int count =0;
        vector<int>visited(n,0);

        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
               queue<int> q;
                q.push(i);
                visited[i] = true;
                int vertex=0;
                int edge=0;

while (!q.empty()) {
    int node = q.front();
    q.pop();
    vertex++;

    edge+=adj[node].size();

    for (int nei : adj[node]) {
        if (!visited[nei]) {
            visited[nei] = true;
            q.push(nei);
        }
    }
}
edge /= 2;

if (edge == vertex * (vertex - 1) / 2)
    count++;
            }
        }

        return count;

    }
};