class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        if(n==2 && nums[0]==1 && nums[1]==1) return true;
        if(n<=2) return false;
        sort(nums.begin(),nums.end());
        if(nums[0]!=1) return false;
        if(n>=2 && nums[n-1]!=nums[n-2]) return false;
        
        for(int i=0;i<n-2;i++){
            
            if((nums[i]+1)!=nums[i+1]) return false;
        }

        return true;

    }
};