class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();

        vector<int> index(n+1,2);
        vector<int>ans(n,0);

        for(int i=0;i<n;i++){
            index[A[i]]--;
            index[B[i]]--;
            int count=0;
            for(int i=0;i<=n;i++){
                if(index[i]==0) count++;
            }
            ans[i]=count;
            count=0;
        }

        return ans;

    }
};