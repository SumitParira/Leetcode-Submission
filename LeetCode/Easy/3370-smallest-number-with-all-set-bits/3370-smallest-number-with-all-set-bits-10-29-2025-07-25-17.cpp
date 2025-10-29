class Solution {
public:
    int smallestNumber(int n) {
        int i=0;
        while(1){
            int number = pow(2,i);
            
            if(number>n) return number-1;
            i++;
        }
        return 0;
    }
};