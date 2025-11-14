class Solution {
public:
    vector<vector<int>> rangeAddQueries(int n, vector<vector<int>>& queries) {
        vector<vector<int>>mat(n,vector<int>(n,0));

        for(auto it:queries){
            int first=it[0];
            int second=it[1];
            int third=it[2];
            int fourth=it[3];

            for(int i=first;i<=third;i++){
                for(int j=second;j<=fourth;j++){
                    mat[i][j]+=1;
                }
            }
        }

        vector<vector<int>> ans;
        

        for(int i=0;i<n;i++){
            vector<int> subans;
            for(int j=0;j<n;j++){
                subans.push_back(mat[i][j]);
            }
            ans.push_back(subans);
        }

        return ans;
    }
};