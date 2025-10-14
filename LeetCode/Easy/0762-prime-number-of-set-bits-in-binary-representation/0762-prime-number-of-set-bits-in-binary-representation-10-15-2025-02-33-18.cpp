class Solution {
public:
    bool isPrime(int n){
        if(n<=1) return false;
        if(n==2) return true;

        for(int i=2;i<=sqrt(n);i++){
            if(n%i==0) return false;
        }

        return true;
    }
    int countPrimeSetBits(int left, int right) {
        int count{};
        while(left<=right){
            int no = __builtin_popcount(left);
            if(isPrime(no)) count++;

            left++;
        }
        return count;
    }
};