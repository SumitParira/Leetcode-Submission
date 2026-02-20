class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        vector<bool> visited(n,false);
        visited[0]=true;
        unordered_map<int,vector<int>> adj;

        for(int i=0;i<n;i++){
            int k=rooms[i].size();
            for(int j=0;j<k;j++){
                adj[i].push_back(rooms[i][j]);
            }
        }
        
        queue<int> q;
        q.push(0);
       while (!q.empty()) {
    int curr = q.front();
    q.pop();

    for (int next : adj[curr]) {
        if (!visited[next]) {
            visited[next] = true;
            q.push(next);
        }
    }
}
        
        for(int i=0;i<n;i++){
            if(visited[i]==false) return false;
        }
        return true;
    }
};