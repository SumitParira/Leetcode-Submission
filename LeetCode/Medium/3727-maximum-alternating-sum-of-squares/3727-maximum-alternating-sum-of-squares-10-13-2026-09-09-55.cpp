class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0) nums[i]=-nums[i];
        }
        sort(nums.begin(),nums.end());
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()/2) sum-=(nums[i]*nums[i]);
            else sum+=(nums[i]*nums[i]);
        }
        return sum;
    }
};