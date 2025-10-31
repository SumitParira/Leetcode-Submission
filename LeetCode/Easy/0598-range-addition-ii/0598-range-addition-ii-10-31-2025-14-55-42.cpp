class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int min_ans_left=INT_MAX;
        int min_ans_right=INT_MAX;

        for(auto it:ops){
            min_ans_left=min(it[0],min_ans_left);
            min_ans_right=min(it[1],min_ans_right);
          
        }

        if (ops.empty()) return m * n;
    

        return (int)min_ans_left*min_ans_right;
    }
};