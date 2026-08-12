class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int ,int> mp;
        int n=nums.size();
        int i=0,j=0;
        int max_ans=INT_MIN;
        while(j<n){
            mp[nums[j]]++;
            if(mp[nums[j]]>k){
                max_ans=max(max_ans,j-i);
                while(mp[nums[j]]>k) {mp[nums[i]]--;i++;}
            }
            
            j++;
            max_ans=max(max_ans,j-i);
        }
        return max_ans;
    }
};