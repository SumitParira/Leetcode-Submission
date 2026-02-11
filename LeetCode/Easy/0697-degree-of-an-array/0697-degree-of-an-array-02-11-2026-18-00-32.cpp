class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int,vector<int>> mp;
        int max_size=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]].push_back(i);
            max_size=max(max_size,(int)mp[nums[i]].size());
        }
        int max_length=INT_MAX;
        for(int i=0;i<mp.size();i++){
            if(mp[i].size()==max_size){
                max_length=min(max_length,mp[i][max_size-1]-mp[i][0]);
            }
        }
        return max_length+1;
    }
};