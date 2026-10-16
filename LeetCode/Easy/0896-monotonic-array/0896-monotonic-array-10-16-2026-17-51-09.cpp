class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool isGreater=false;
        bool isSmaller=false;

        int n = nums.size();

        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]) continue;
            else if(nums[i]<=nums[i+1]) isGreater=true;
            else isSmaller=true;
        }
        return !(isGreater && isSmaller);
    }
};