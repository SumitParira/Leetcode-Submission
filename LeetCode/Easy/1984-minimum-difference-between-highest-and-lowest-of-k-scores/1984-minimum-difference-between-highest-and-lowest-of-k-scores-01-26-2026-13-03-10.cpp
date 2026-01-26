class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n = nums.size();
        if (k == 1) return 0;

        sort(nums.begin(), nums.end());

        int min_ans = INT_MAX;

        for (int i = 0; i + k - 1 < n; i++) {
            min_ans = min(min_ans, nums[i + k - 1] - nums[i]);
        }

        return min_ans;
    }
};
