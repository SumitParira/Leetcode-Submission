class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int max_sum=0;
        int i=0;
        int j=nums.size()-1;
        while(i<j){
            max_sum=max(max_sum,nums[i]+nums[j]);
            i++;
            j--;
        }
        return max_sum;
    }
};