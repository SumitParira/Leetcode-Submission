class Solution {
public:
    int alternateDigitSum(int n) {
         int sum=0;
        int count=0;
        string str=to_string(n);
        reverse(begin(str),end(str));
        n=stoi(str);
        
        while(n>0){
            if(count%2==0) sum+=n%10;
            else sum-=n%10;
            count++;
            n=n/10;
        }
        return sum;
    }
};