class Solution {
public:
    vector<int> maxValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n);
        
        // Stack of {component_max, left, right}
        vector<tuple<int,int,int>> stk;
        
        for (int i = 0; i < n; i++) {
            int curMax = nums[i], left = i;
            
            // Merge while top component's max > nums[i]
            while (!stk.empty() && get<0>(stk.back()) > nums[i]) {
                auto [topMax, topLeft, topRight] = stk.back();
                stk.pop_back();
                curMax = max(curMax, topMax);
                left = topLeft;  // extend left boundary
            }
            
            stk.push_back({curMax, left, i});
        }
        
        // Fill answers
        for (auto& [compMax, l, r] : stk) {
            for (int i = l; i <= r; i++)
                ans[i] = compMax;
        }
        
        return ans;
    }
};