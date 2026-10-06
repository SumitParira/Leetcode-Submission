class Solution {
public:
    int minAddToMakeValid(string s) {
        int left =0;
        int total=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') left++;
            else {
                if(left>0) left--;
                else total++;
            }
        }
        return total+left;
    }
};