class Solution {
public:

void rotate(string &curr,int b){
    reverse(begin(curr),end(curr));
    reverse(begin(curr),begin(curr)+b);
    reverse(begin(curr)+b,end(curr));
}

    string findLexSmallestString(string s, int a, int b) {
        set<string> st;
        queue<string> q;
        q.push(s);
        st.insert(s);
        string minm_value = s;

        while(!q.empty()){
            string curr=q.front();
            q.pop();

            if(curr<minm_value) minm_value=curr;

            string temp = curr;

            for(int i=1;i<temp.size();i+=2){
                temp[i]=((temp[i]-'0'+a)%10)+'0';
            }

            if(!st.count(temp)) {
                st.insert(temp);
                q.push(temp);
            }

            rotate(curr,b);

            if(!st.count(curr)){
                 st.insert(curr);
                q.push(curr);
            }

        }

        return minm_value;
    }
};