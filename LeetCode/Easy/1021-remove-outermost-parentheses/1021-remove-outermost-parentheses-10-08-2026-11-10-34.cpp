class Solution {
public:
    string removeOuterParentheses(string s) {
        string str ="";
        int n=s.size();
        int count=0;
        int left=0;

        for(int i=0;i<n;i++){
            if(s[i]=='('){
                if(count){
                    str+=s[i];
                    left++;
                }else{
                    count++;
                }
            }else{
                if(left){
                   str+=s[i];
                   left--; 
                }else{
                    count--;
                }
            }
        }
        return str;
    }
};