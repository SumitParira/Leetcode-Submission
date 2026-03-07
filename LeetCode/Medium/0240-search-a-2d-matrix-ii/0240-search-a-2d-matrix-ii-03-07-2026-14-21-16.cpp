class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        for (auto& row : matrix) {
        // binary search in this row
        int lo = 0, hi = row.size() - 1;
        while (lo <= hi) {
            int mid = lo + (hi - lo) / 2;
            if (row[mid] == target) return true;
            else if (row[mid] < target) lo = mid + 1;
            else hi = mid - 1;
        }
    }
    return false;
    }
};