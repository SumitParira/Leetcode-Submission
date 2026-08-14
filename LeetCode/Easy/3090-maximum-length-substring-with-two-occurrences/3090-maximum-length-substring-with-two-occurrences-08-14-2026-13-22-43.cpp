class Solution {
public:
    int maximumLengthSubstring(string s) {
        int cnt[26]={0};
        int ans = 0;

      for(int left=0,right=0;right<s.length();++right) {
        int idx = s[right]-'a';
        ++cnt[idx];
        while(cnt[idx]>2){
        --cnt[s[left]-'a'];
        ++left;
      }
      ans=max(ans,right-left+1);
      }

      return ans;

    }
};