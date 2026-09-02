class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        int n = pairs.size();
        vector<int> ans(n,1);
        sort(pairs.begin(),pairs.end());
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(pairs[i][0]>pairs[j][1]) ans[i]=max(ans[i],ans[j]+1);
            }
        }
        return *max_element(ans.begin(),ans.end());
    }
};