class Solution {
public:

    unordered_set<string>st;
    int t[301];
    int n;

    bool solve(string s,int idx){
        if(idx==s.size()) return true;
        if(st.find(s.substr(idx,n-idx))!=st.end()) return true;

        if(t[idx]!=-1) return t[idx];

        for(int l=1;l<=n;l++){
            string temp=s.substr(idx,l);

            if(st.find(temp)!=st.end()&&solve(s,idx+l))
            return t[idx]=true;

        }

        return t[idx]=false;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        st=unordered_set<string>(wordDict.begin(),wordDict.end());
        n=s.size();
        memset(t,-1,sizeof(t));

        return solve(s,0);

    }
};