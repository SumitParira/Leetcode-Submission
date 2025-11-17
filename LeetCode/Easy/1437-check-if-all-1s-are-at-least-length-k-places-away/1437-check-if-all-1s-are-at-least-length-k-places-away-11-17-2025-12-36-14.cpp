class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int n = nums.size();
        int count=0;
        bool firstOne=false;
        for(int i=0;i<n;i++){
        
            if(nums[i]==1){
                if(firstOne && count<k) return false;
                else {
                    count=0;
                    firstOne=true;
                }
            }else count++;
        }
        return true;
    }
};