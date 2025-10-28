class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int totalSum=0;
        for(auto it:nums) totalSum+=it;

        int currSum=0;

        int count = 0;

        for(int i=0;i<nums.size();i++){
            currSum+=nums[i];
            if(nums[i]==0){
                if(totalSum-currSum==currSum) count+=2;
                else if(((totalSum-currSum)==currSum+1) || (totalSum-currSum)==currSum-1) count+=1;
            }
        }
        return count;
    }
};