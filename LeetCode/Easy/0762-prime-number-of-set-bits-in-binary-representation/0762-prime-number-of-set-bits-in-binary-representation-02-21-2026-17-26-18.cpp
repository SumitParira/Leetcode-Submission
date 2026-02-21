class Solution {
public:

bool isprime(int n){{
    if(n<=1) return false;
    if(n==2) return true;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false;
    }
    return true;
}

}
    int countPrimeSetBits(int left, int right) {
        int count =0;
        while(left<=right){
            if(isprime(__builtin_popcount(left)) ) count++;
            left++;
        }
        return count;
    }
};