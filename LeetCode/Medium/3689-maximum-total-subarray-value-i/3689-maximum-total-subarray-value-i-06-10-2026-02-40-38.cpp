class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
          long long minEle = *min_element(nums.begin(),nums.end());
        long long  maxEle = *max_element(nums.begin(),nums.end());

        return (long long)k*(maxEle-minEle);
    }
};