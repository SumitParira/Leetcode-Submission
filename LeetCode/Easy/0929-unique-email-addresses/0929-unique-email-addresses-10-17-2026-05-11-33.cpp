class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        set<string> st;

        for (int i = 0; i < emails.size(); i++) {
            string s = "";
            int j = 0;

            while (emails[i][j] != '@') {
                if (emails[i][j] == '.') {
                    j++;
                    continue;
                }

                if (emails[i][j] == '+') {
                    while (emails[i][j] != '@') {
                        j++;
                    }
                    break;
                }

                s += emails[i][j];
                j++;
            }

            while (j < emails[i].size()) {
                s += emails[i][j];
                j++;
            }

            st.insert(s);
        }

        return st.size();
    }
};