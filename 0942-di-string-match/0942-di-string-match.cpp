class Solution {
public:
    vector<int> diStringMatch(string s) {
        int a=(int)s.size();
        int j=0;

        vector<int> ans;

        for(int i=0;i<s.size();i++){
            if(s[i]=='I') {
                ans.push_back(j);
                j++;
            } else{
                ans.push_back(a);
                a--;
            }
        }

        ans.push_back(j);

        return ans;
    }
};