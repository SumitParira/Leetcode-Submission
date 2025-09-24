class Solution {
public:
    string fractionToDecimal(int n, int d) {
        string result = "";
        bool minus = ((long)n * (long)d) < 0;
        long numerator = abs((long)n);
        long denominator = abs((long)d);
        result += to_string(numerator / denominator);
        if (numerator % denominator != 0) {
            numerator = numerator % denominator;
            vector<long> numerators;
            unordered_map<long, long> nueratorsDecimals;
            result += '.';
            while (true) {
                if (numerator % denominator == 0) {
                    for (auto num : numerators)
                        result += to_string(nueratorsDecimals[num]);
                    break;
                }
                if (find(numerators.begin(), numerators.end(), numerator) != numerators.end()) {
                    bool flag = true;
                    for (auto num : numerators) {
                        if (flag && num == numerator) {
                            result += '(';
                            flag = false;
                        }
                        result += to_string(nueratorsDecimals[num]);
                    }
                    result += ')';
                    break;
                }
                numerators.push_back(numerator);
                nueratorsDecimals[numerator] = (numerator * 10) / denominator;
                numerator = (numerator * 10) % denominator;
            }
        }
        return minus ? '-' + result : result;
    }
};