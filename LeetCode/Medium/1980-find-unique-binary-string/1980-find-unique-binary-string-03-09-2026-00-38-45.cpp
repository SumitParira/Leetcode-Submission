class Solution {
public:
    
    string solve(unordered_set<string> st,int n,string curr){
        if(curr.size()==n){
            if(st.find(curr)==st.end()) return curr;
            return "";
        }

        string left = solve(st, n, curr + "0");
        if(left != "") return left;

        string right = solve(st, n, curr + "1");
        if(right != "") return right;

        return "";
    }

    string findDifferentBinaryString(vector<string>& nums) {
        int n = nums[0].size();
        unordered_set<string> st(nums.begin(),nums.end());
        string ans = solve(st, n,"");

        return ans;
    }
};