class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n=nums.size();
        int maxOpp=INT_MAX;

        int count = 0;

        for(int i=0;i<n;i++){
            if(nums[i]==1) count++;
        }

        if(count>0) return n-count;

        for(int i=0;i<n;i++){
            int GCD=nums[i];
            for(int j=i+1;j<n;j++){
                 GCD=gcd(GCD,nums[j]);

                if(GCD==1) {maxOpp=min(maxOpp,j-i);break;}
            }
        }

        if(maxOpp==INT_MAX) return -1;

        return maxOpp+(n-1);


    }
};