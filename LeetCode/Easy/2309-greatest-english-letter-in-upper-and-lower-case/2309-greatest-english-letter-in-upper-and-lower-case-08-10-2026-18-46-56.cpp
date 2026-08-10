class Solution {
public:
    string greatestLetter(string s) {
        vector<int> small(26,0);
        vector<int> large(26,0);

        for(int i=0;i<s.size();i++){
           if(s[i] >= 'a' && s[i] <= 'z')
                    small[s[i]-'a']++;

            if(s[i] >= 'A' && s[i] <= 'Z')
                    large[s[i]-'A']++;
        }
        string ans = "";
        for(int i=0;i<26;i++){
            if(small[i]>0 && large[i]>0) ans=i+'A';
        }

        return ans;
    }
};