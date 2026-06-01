class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n = nums.size();
        int ans = INT_MAX;

        for(int i=0;i<k;i++){
            for(int j=0;j<k;j++){
                if(i==j) continue;
                int cost=0;

                for(int b=0;b<n;b++){
                    int target = (b%2 == 0)? i : j;

                    int rem=nums[b]%k;
                    int diff=abs(rem-target);
                    cost+=min(diff,k-diff);
                }
                ans=min(ans,cost);
            }
        }
        return ans;
    }
};