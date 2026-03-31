class Solution {
public:
    bool checkStrings(string s1, string s2) {
        if(s1.size()!=s2.size()) return false;

        string s1Even="";
        string s1Odd="";
        string s2Even="";
        string s2Odd="";

        int n = s1.size();

        for(int i=0;i<n;i++){
            if(s1[i]!=s2[i]){
                if(i%2==0){
                    s1Even+=s1[i];
                    s2Even+=s2[i];
                }else{
                    s1Odd+=s1[i];
                    s2Odd+=s2[i];
                }
            }
        }

        sort(s1Even.begin(),s1Even.end());
        sort(s2Even.begin(),s2Even.end());
        sort(s1Odd.begin(),s1Odd.end());
        sort(s2Odd.begin(),s2Odd.end());

        if((s1Even==s2Even)&&(s1Odd==s2Odd)) return true;

        return false;

    }
};