class Solution {
public:

    void solve(int k, int n,vector<vector<int>>&ans,vector<int>&curr,int sum,int value){
        if(sum==n && curr.size()==k) {ans.push_back(curr); return;}
        if(curr.size()>k || sum>n || value>9) return ;

        curr.push_back(value);
        solve(k, n, ans, curr, sum + value, value + 1);
        curr.pop_back();  

        
        solve(k, n, ans, curr, sum, value + 1);



    }

    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>curr;
        int sum=0;
        solve(k,n,ans,curr,sum,1);

        return ans;
    }
};