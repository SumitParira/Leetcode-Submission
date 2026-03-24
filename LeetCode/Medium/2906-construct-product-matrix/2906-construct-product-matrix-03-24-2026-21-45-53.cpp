class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        const int MOD =12345;
        int n=grid.size();
        int m=grid[0].size();

        vector<int> arr;

        for(auto &row:grid ) {
            for(auto &col:row) arr.push_back(col%MOD);
        }

        int size = n*m;

        vector<int> prefix(size,1);
        vector<int> suffix(size,1);

        for(int i=1;i<size;i++) prefix[i] = (prefix[i-1] * arr[i-1]) % MOD;
        for(int i=size-2;i>=0;i--) suffix[i] = (suffix[i+1] * arr[i+1]) % MOD;

        vector<int> ans(size);

        for(int i=0;i<size;i++){
            ans[i]=(prefix[i]*suffix[i])%12345;
        }

        for(int i=0;i<size;i++){
            int row=i/m;
            int col=i%m;

            grid[row][col]=ans[i];
        }


    return grid;
        
    }
};