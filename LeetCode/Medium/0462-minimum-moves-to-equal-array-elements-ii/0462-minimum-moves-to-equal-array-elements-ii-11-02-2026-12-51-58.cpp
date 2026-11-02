class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n = nums.size();
        // int low=*min_element(nums.begin(),nums.end());
        // int high=*max_element(nums.begin(),nums.end());
        // int ans=high;
        // while(low<=high){
        //     int sum=0;
        //     int mid = (high-low)/2;



        // }

        sort(nums.begin(),nums.end());

        int median = nums[n/2];

        int sum=0;

        for(auto it:nums){
            sum+=abs(it-median);
        }

        return sum;

        
    }
};