class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        vector<long long> rowSums(n,0);
        vector<long long> colSums(m,0);

        long long total=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                rowSums[i]+=grid[i][j];
                colSums[j]+=grid[i][j];
                total+=grid[i][j];
            }
        }
        long long pref=0;
        for(int i=0;i<n-1;i++){
            pref+=rowSums[i];
            if(pref==total-pref) return true;
        }

        pref=0;
        for(int j=0;j<m-1;j++){
            pref+=colSums[j];
            if(pref==total-pref) return true;
        }
        return false;
    }
};