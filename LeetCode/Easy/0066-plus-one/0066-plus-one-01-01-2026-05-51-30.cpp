class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        bool ans=true;
        int n=digits.size();
        for(int i=n-1;i>=0;i--){
            if(digits[i]==9) digits[i]=0;
            else{
                digits[i]=digits[i]+1;
                ans=false;
                break;
            }
        }
        vector<int>result(n+1,0);
        if(ans){
            result[0]=1;
            return result;
        }
        return digits;
    }
};