class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int sum=accumulate(nums.begin(),nums.end(),0);
        int Leftsum=0;
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            Leftsum+=nums[i];
            sum-=nums[i];
            if(abs(Leftsum-sum)%2==0) count++;
        }
        return count;
    }
};