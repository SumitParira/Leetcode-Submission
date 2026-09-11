class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m=mat[0].size();

        int low=0;
        int high=n-1;

        while(low<=high){
            int mid = low+(high-low)/2;
            int maxRow=0;
            for(int row=0;row<m;row++){
                if(mat[mid][row]>mat[mid][maxRow]) maxRow=row;
            }
            int curr= mat[mid][maxRow];

            int upper= (mid > 0) ? mat[mid - 1][maxRow] : -1;
            int lower= (mid < n-1) ? mat[mid + 1][maxRow] : -1;

            if (curr > upper && curr > lower) {
                return {mid, maxRow};
            }
             if (upper > curr) {
                high = mid - 1;
            }else{
                low=mid+1;
            }
        }
        return {-1,-1};
    }
};