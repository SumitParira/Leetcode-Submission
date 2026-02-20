class Solution {
public:
    string makeLargestSpecial(string s) {
        vector<string> st;
        int count = 0;
        int start = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') count++;
            else count--;

            if (count == 0) {
                string inner = s.substr(start + 1, i - start - 1);
                st.push_back("1" + makeLargestSpecial(inner) + "0");
                start = i + 1;
            }
        }

        sort(st.begin(), st.end(), greater<string>());

        string ans = "";
        for (auto str : st) ans += str;
        return ans;
    }
};
