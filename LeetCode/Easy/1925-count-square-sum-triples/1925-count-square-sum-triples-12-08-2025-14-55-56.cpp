class Solution {
public:
    int countTriples(int n) {
        vector<int>st;

        for(int i=1;i<=n;i++) st.push_back(i*i);

        int count=0;

        for(int i=0;i<st.size();i++){
            int sum=st[i];
            for(int j=i+1;j<st.size();j++){
                sum+=st[j];

                if(find(st.begin(),st.end(),sum)!=st.end()) count+=2;
                sum-=st[j];
            }
        }

        return count;
    }
};