class Solution {
public:
    int uniquePaths(int m, int n) {
        
        vector<vector<int>> dp(m,vector<int>(n, 1));


        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                dp[i][j]=dp[i-1][j]+dp[i][j-1];
            }
        }


        return dp[m-1][n-1];
    }
};





// -------------------------xxxxxxxxxxxxxxxxxxxxx------------------


// class Solution {
// public:

//     int NoUniquePaths(int i,int j,int m,int n,  vector<vector<int>> &dp){
         
//         if(i == m-1 && j==n-1) return 1;
//         if(i<0 || i>=m || j<0 || j>=n) return 0;

//         if(dp[i][j]!=-1) return dp[i][j];
//         return dp [i][j]=NoUniquePaths(i+1,j,m,n,dp)+NoUniquePaths(i,j+1,m,n,dp);
//     }

//     int uniquePaths(int m, int n) {
//         vector<vector<int>> dp(m, vector<int>(n, -1));
//         return NoUniquePaths(0,0,m,n,dp);
//     }
// };