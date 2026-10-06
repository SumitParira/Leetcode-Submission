class Solution {
public:
    int minAddToMakeValid(string s) {
        int left =0;
        int right=0;
        int total=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') left++;
            else {
                if(left>0) left--;
                else right++;
            }

            if(left==right){
                left=0;
                right=0;
            }
            
            if(right>0) {
                total+=right;
                right=0;
            }

        }
        return total+left;
    }
};