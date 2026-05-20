// ____________O(n) approach
class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        vector<int> ans(n,0);
        vector<int> freq(n+1,0);

        int commonCount=0;

        for(int i=0;i<n;i++){
            freq[A[i]]++;
            if(freq[A[i]]==2) commonCount++;

            freq[B[i]]++;
            if(freq[B[i]]==2) commonCount++;

            ans[i]=commonCount;
        }

        return ans;
    }
};


// ___________O(n2)___________ brute firce approach
// class Solution {
// public:
//     vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
//         int n = A.size();

//         vector<int> index(n+1,2);
//         vector<int>ans(n,0);

//         for(int i=0;i<n;i++){
//             index[A[i]]--;
//             index[B[i]]--;
//             int count=0;
//             for(int i=0;i<=n;i++){
//                 if(index[i]==0) count++;
//             }
//             ans[i]=count;
//             count=0;
//         }

//         return ans;

//     }
// };