class Solution {
public:
    int n;
    int isPossible(vector<vector<int>>& grid,int i,int j,int mid,vector<vector<bool>> &visited){
        if(i<0 || j<0 || i>=n || j>=n || visited[i][j]==true || grid[i][j]>mid) return false;
        if(i==n-1 && j==n-1) return true;

        visited[i][j]=true;

      return  isPossible(grid,i-1,j,mid,visited)||
        isPossible(grid,i+1,j,mid,visited)||
        isPossible(grid,i,j-1,mid,visited)||
        isPossible(grid,i,j+1,mid,visited);

        

        
    }


    int swimInWater(vector<vector<int>>& grid) {
         n= grid.size();
        int l=grid[0][0];
        int r= n*n-1;
        int result= grid[0][0];

        while(l<=r){
            int mid = l+(r-l)/2;

            vector<vector<bool>>visited (n,vector<bool>(n,false));

            if(isPossible(grid,0,0,mid,visited)){
                result=mid;
                r = mid-1;

            }else{
                l=mid+1;
            }
        }
        return result;
    }
};










// ------------------------------------xxxxxxxxxxxxxx------------------------

// class Solution {
// public:
//     int ans= INT_MAX;
//     void dfs(int i,int j,int n,vector<vector<int>>&grid,vector<vector<int>>& visited, int maxSoFar){
//          if (i == n-1 && j == n-1) {
//         ans = min(ans, maxSoFar);
//         return;
//     }

//     visited[i][j] = 1;

//     int dx[] = {1, -1, 0, 0};
//     int dy[] = {0, 0, 1, -1};

//     for (int k = 0; k < 4; k++) {
//         int x = i + dx[k];
//         int y = j + dy[k];
//         if (x >= 0 && y >= 0 && x < n && y < n && !visited[x][y]) {
//             dfs(x, y, n, grid, visited, max(maxSoFar, grid[x][y]));
//         }
//     }

//     visited[i][j] = 0;

//     }
//     int swimInWater(vector<vector<int>>& grid) {
//         int n= grid.size();
//         vector<vector<int>> visited(n,vector<int>(n,0));
//         ans=INT_MAX;

//         dfs(0,0,n,grid,visited,grid[0][0]);
//         return ans;
//     }
// };