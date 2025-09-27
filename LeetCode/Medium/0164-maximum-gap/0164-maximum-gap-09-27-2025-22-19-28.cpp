class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if(nums.size()<2) return 0;
        sort(begin(nums),end(nums));

        int ans = nums[1]-nums[0];

        for(int i=2;i<nums.size();i++){
            ans = max(ans,nums[i]-nums[i-1]) ;
        }

        return ans;
    }
};