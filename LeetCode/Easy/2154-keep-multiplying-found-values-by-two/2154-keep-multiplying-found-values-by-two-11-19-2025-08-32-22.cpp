class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        int n=nums.size();
        while(true){
            if(count(nums.begin(), nums.end(), original) > 0) original=original*2;
            else break;
        }
        return original;
    }
};