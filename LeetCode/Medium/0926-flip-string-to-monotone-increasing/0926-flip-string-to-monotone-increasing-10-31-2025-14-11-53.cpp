class Solution {
public:

    int n ;

    int solve(string &s,int curr_index,int prev,vector<vector<int>> &dp){
        if(curr_index>=n) return 0;
        int flip=INT_MAX;
        int noflip=INT_MAX;

        if(dp[curr_index][prev]!=-1) return dp[curr_index][prev];

        if(s[curr_index]=='0'){
            if(prev==1){
                flip=1+solve(s,curr_index+1,1,dp);
            }else{
                flip=1+solve(s,curr_index+1,1,dp);
                noflip=solve(s,curr_index+1,0,dp);
            }
        }else{
                 if(prev==1){
                noflip=solve(s,curr_index+1,1,dp);
            }else{
                flip=1+solve(s,curr_index+1,0,dp);
                noflip=solve(s,curr_index+1,1,dp);
            }
        }
        return dp[curr_index][prev]=min(flip,noflip);
    }

    int minFlipsMonoIncr(string s) {
        n=s.size();
        vector<vector<int>> dp(n+1,vector<int>(2,-1));
        
        
        return solve(s,0,0,dp);
    }
};