class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        string s = "";

        string dig = to_string(n);

        for (int i = 0; i < dig.size(); i++) {
            if (dig[i] != '0') {
                s += dig[i];
                sum += dig[i] - '0';
            }
        }
        if (s.empty())
    return 0;

        long long num = stoll(s);
        return num * sum;
    }
};