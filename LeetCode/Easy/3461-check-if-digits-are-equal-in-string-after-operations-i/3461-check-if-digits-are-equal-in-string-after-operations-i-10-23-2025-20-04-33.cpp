class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()>2){
            string temp="";
            for(int i=0;i<s.size()-1;i++){
                int d=s[i]-'0';
                int d1=s[i+1]-'0';
                int sum=(d+d1)%10;

                temp+=to_string(sum);


            }
            s=temp;
        }
        return s[0]==s[1];
    }
};