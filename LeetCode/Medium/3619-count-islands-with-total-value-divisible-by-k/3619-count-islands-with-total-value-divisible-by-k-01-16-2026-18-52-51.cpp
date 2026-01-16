class Solution {
public:

int n,m;

 void solve(vector<vector<int>>& grid,int k,long long &sum,int i,int j){
            if(i>=n || i<0 || j<0 || j>=m || grid[i][j]==0) return ;
            sum+=(long long)grid[i][j];
            grid[i][j]=0;

            solve(grid,k,sum,i+1,j);
            solve(grid,k,sum,i,j+1);
            solve(grid,k,sum,i-1,j);
            solve(grid,k,sum,i,j-1);

        
         }

    int countIslands(vector<vector<int>>& grid, int k) {
         n = grid.size();
         m = grid[0].size();
         
         int count=0;

        

        for(int i=0;i<n;i++){
            
            for(int j=0;j<m;j++){
                long long sum=0;
                if(grid[i][j]!=0) {solve(grid,k,sum,i,j) ; if(sum%k==0) count++;}
            }
        }
        return count;
    }
};