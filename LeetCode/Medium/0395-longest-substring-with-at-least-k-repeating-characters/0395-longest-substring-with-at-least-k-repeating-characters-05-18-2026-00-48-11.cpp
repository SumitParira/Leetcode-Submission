class Solution {
public:
    int longestSubstring(string s, int k) {
        return solve(s,0,s.size(),k);
    }

    int solve(string &s,int lower,int higher,int k){
        if(higher-lower<k) return 0;

        vector<int> freq(26,0);
        for(int i=lower;i<higher;i++) freq[s[i]-'a']++;

        bool allValid = true;

        for(int i=lower;i<higher;i++){
            if(freq[s[i]-'a']<k){
                allValid=false;
                break;
            }
        }
        if(allValid) return higher-lower;

        int res=0,start=lower;

        for(int i=lower;i<higher;i++){
            if(freq[s[i]-'a']<k){
                res=max(res,solve(s,start,i,k));
                start=i+1;
            }
        }
        res=max(res,solve(s,start,higher,k));
        return res;
    }
};