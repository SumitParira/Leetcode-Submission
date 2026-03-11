class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int result=0;
        int counter=0;
        while(n){
            int value=n%2;
            value= !value;
            result+=(pow(2,counter)*value);
            counter++;
            n=n/2;
        }
        return result;
    }
};