class Solution {
public:
    int minFlips(string s) {
        int n = s.size();
        s = s + s;          // double the string
        int m = s.size();   // 2n

        // Build both target patterns of length 2n
        string alt1 = "", alt2 = "";
        for (int i = 0; i < m; i++) {
            alt1 += (i % 2 == 0) ? '0' : '1';
            alt2 += (i % 2 == 0) ? '1' : '0';
        }

        int diff1 = 0, diff2 = 0;
        int res = n;

        for (int i = 0; i < m; i++) {
            
            if (s[i] != alt1[i]) diff1++;
            if (s[i] != alt2[i]) diff2++;

            
            if (i >= n) {
                if (s[i - n] != alt1[i - n]) diff1--;
                if (s[i - n] != alt2[i - n]) diff2--;
            }

            
            if (i >= n - 1) {
                res = min(res, min(diff1, diff2));
            }
        }
        return res;
    }
};