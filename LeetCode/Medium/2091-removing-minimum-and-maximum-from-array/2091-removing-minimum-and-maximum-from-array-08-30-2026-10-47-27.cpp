class Solution {
public:
    int minimumDeletions(vector<int>& nums) {

        if(nums.size()<=2) return nums.size();
        int min_array = INT_MAX;
        int min_index=0;
        int max_array = INT_MIN;
        int max_index=0;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<min_array) {
                min_index=i;
                min_array=nums[i];
            }
            if(nums[i]>max_array){
                max_index=i;
                max_array=nums[i];
            }
        }

        int left= min(min_index,max_index);
        int right= max(min_index,max_index);
        int leftdelete=right+1;
        int rightdelete=nums.size()-left;
        int fromBothside=left+1+(nums.size()-right);

        return min({leftdelete,rightdelete,fromBothside});
    }
};