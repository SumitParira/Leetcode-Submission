class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        unordered_map<int,vector<int>> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
        }
        vector<int> ans(queries.size(),-1);
        for(int i=0;i<queries.size();i++){
            int q= queries[i];
            int value = nums[queries[i]];
            vector<int> &indices = mp[value];
            if(indices.size()==1) continue;
            int best = INT_MAX;
            int pos = lower_bound(indices.begin(),indices.end(),q)-indices.begin();

            int right=(pos+1+indices.size())%indices.size();
            int dist =  abs(indices[right]-q);
            best = min(best,min(dist,n-dist));

            int left=(pos-1+indices.size())%indices.size();
             dist =  abs(indices[left]-q);
            best = min(best,min(dist,n-dist));

            ans[i]=best;

        }
        return ans;
    }
};