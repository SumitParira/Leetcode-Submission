class Solution {
public:
int dp[11][2][11];

    int solve(string &s,int index,int tight,int count){
        if(index==s.size()) return count;
        if(dp[index][tight][count]!=-1) return dp[index][tight][count];

        int limit=(tight==1)?s[index]-'0':9;
        int ans=0;

        for(int i=0;i<=limit;i++){
            int updateCnt = count + (i==1 ? 1: 0);
            ans+= solve(s,index+1,(tight & (i==s[index]-'0')),updateCnt);
        }

        return dp[index][tight][count]=ans;

    }

    int countDigitOne(int n) {
        string s = to_string(n);
        memset(dp,-1,sizeof(dp));

        return solve(s,0,1,0);
    }
};