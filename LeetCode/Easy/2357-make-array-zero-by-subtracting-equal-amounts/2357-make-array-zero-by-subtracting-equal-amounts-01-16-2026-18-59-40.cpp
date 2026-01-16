class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        bool countZeroes=false;
        set<int>st;
        for(auto it:nums) {
            if(it==0) countZeroes=true;
            st.insert(it);}
            if(countZeroes) return (int) st.size()-1;
        return (int) st.size();
    }
};