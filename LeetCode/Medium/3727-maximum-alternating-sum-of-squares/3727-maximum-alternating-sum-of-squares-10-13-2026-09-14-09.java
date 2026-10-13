class Solution {
    public long maxAlternatingSum(int[] nums) {
         for(int i=0;i<nums.length;i++){
            if(nums[i]<0) nums[i]=-nums[i];
        }
        Arrays.sort(nums);
        long  sum=0;
        for(int i=0;i<nums.length;i++){
            if(i<nums.length/2) sum-=(nums[i]*nums[i]);
            else sum+=(nums[i]*nums[i]);
        }
        return sum;
    }
}