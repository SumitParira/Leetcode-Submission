class Solution {
public:
    int maxOperations(string s) {
        int n = s.size();
        int count1=0;
        bool zeroes=false;
        int sum=0;

        for(int i=0;i<n;i++){
            if(s[i]=='1') {
               if(zeroes) sum+=count1;
                zeroes=false;
                count1++;
            }
            else {
                zeroes=true;
            }
        }
        if(zeroes) sum+=count1;


        return sum;
    }
};