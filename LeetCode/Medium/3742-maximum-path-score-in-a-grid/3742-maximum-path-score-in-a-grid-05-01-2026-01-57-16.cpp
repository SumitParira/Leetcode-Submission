class Solution {
public:
    int m, n;

    int solve(vector<vector<int>>& grid, int k, int i, int j, int cost,
              vector<vector<vector<int>>>& t) {
        if (i >= m || j >= n)
            return INT_MIN;

        int newCost = (i == 0 && j == 0) ? 0 : cost + (grid[i][j] > 0);

        if (newCost > k)
            return INT_MIN;

        if (i == m-1 && j == n-1)
            return grid[i][j];

        
        if (t[i][j][newCost] != -1)
            return t[i][j][newCost];

        int down  = solve(grid, k, i+1, j, newCost, t);
        int right = solve(grid, k, i, j+1, newCost, t);

        int bestNext = max(down, right);

        if (bestNext == INT_MIN)
            return t[i][j][newCost] = INT_MIN;  

        return t[i][j][newCost] = grid[i][j] + bestNext;  
    }

    int maxPathScore(vector<vector<int>>& grid, int k) {
        this->m = grid.size();   
        this->n = grid[0].size();

        vector<vector<vector<int>>> t(m, vector<vector<int>>(n, vector<int>(k+1, -1)));

        int result = solve(grid, k, 0, 0, 0, t);

        return result == INT_MIN ? -1 : result;  
    }
};