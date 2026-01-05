class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();

        long long sum = 0;
        long long minAbs = LLONG_MAX;
        int negCount = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                int val = matrix[i][j];
                if (val < 0) negCount++;
                sum += abs(val);
                minAbs = min(minAbs, (long long)abs(val));
            }
        }

        if (negCount % 2 == 1)
            sum -= 2 * minAbs;

        return sum;
    }
};
