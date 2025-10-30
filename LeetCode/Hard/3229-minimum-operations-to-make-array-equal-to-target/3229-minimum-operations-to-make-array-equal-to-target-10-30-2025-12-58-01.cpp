class Solution {
public:
    long long minimumOperations(vector<int>& nums, vector<int>& target) {
        int n = nums.size();
        vector<long long> diff(n);
        for (int i = 0; i < n; ++i)
            diff[i] = (long long)target[i] - nums[i];

        long long sum = llabs(diff[0]);
        for (int i = 1; i < n; ++i)
            sum += llabs(diff[i] - diff[i - 1]);
        sum += llabs(diff[n - 1]);  // closing the last operation
        
        return sum / 2;
    }
};
