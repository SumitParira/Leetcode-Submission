class Solution {
public:
    int scoreOfParentheses(string s) {
        int score=0;
        stack<int> st;

        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                st.push(score);
                score=0;
            }else{
                if(s[i-1]=='(') score=st.top()+1;
                else score=st.top()+score*2;

                st.pop();
            }
        }
        return score;
    }
};