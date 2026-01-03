#define MOD 1000000007

class Solution {
public:
    int numOfWays(int n) {
        long long A = 6, B = 6;

        for (int i = 2; i <= n; i++) {
            long long newA = (A * 2 + B * 2) % MOD;
            long long newB = (A * 2 + B * 3) % MOD;
            A = newA;
            B = newB;
        }

        return (A + B) % MOD;
    }
};
