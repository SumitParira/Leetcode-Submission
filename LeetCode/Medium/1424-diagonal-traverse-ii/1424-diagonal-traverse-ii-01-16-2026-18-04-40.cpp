class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
        unordered_map<int,vector<int>> mp;
        int n = nums.size();
        int dig = 0;
        for(int i=0;i<n;i++){
            int m=nums[i].size();
            for(int j=0;j<m;j++){
                mp[i+j].push_back(nums[i][j]);
                dig = max(dig,i+j);
            }
        }

        vector<int> result;

        for(int d=0;d<=dig;d++){
            vector<int> val= mp[d];
            reverse(val.begin(),val.end());
            for(int x:val) result.push_back(x);
        }

        return result;

    }
};