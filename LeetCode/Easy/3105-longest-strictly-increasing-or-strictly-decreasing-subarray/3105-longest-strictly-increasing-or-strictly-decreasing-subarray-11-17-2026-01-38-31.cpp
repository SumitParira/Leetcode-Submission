class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int cnt1=1;
        int cnt2=1;


        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]<nums[i+1]){
                cnt1++;
                ans=max(ans,cnt1);
                cnt2=1;
            }else if(nums[i]>nums[i+1]){
                cnt2++;
                ans=max(ans,cnt2);
                cnt1=1;
            }else{
                cnt2=1;
                cnt1=1;
            }
        }
        return ans;
    }
};