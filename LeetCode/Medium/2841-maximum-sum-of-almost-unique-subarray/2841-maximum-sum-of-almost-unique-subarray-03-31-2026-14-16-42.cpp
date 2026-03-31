class Solution {
public:
    long long maxSum(vector<int>& nums, int m, int k) {
        unordered_map<int,int> freq;
        long long windowSum=0,ans=0;
        int distinct=0;
        int n=nums.size();

        for(int i=0;i<n;i++){
            windowSum+=nums[i];
            freq[nums[i]]++;
            if(freq[nums[i]]==1) distinct++;

            if(i>=k){
                int left=nums[i-k];
                windowSum-=left;
                freq[left]--;
                if(freq[left]==0){
                    freq.erase(left);
                    distinct--;
                }
            }
            if(i>=k-1 && distinct>=m) ans=max(ans,windowSum);
        }
        return ans;
    }
};