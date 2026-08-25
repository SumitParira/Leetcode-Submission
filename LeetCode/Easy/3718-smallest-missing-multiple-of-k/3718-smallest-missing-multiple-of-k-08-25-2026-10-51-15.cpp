class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int> st(nums.begin(),nums.end());
        int val=0;
        int n = nums.size();
        bool found= true;
        for(int i=1;i<=n;i++){
            if(!st.count(k*i)){
                val=i;
                break;
    false;
            } 
        }

        if(found) return 0;
        return k*val;
    }
};