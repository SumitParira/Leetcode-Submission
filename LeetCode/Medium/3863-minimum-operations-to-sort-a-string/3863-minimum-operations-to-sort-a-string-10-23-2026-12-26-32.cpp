class Solution {
public:
    int minOperations(string s) {
        string t= s;
        sort(t.begin(),t.end());
        int n = s.size();
        if(s==t) return 0;
        if (n == 2) return -1;
        if (s[0] == t[0] || s[n-1] == t[n-1]) return 1;

        string s1=s;
        sort(s1.begin(),s1.end()-1);
        sort(s1.begin()+1,s1.end());

        string s2=s;

        sort(s2.begin()+1,s2.end());
        sort(s2.begin(),s2.end()-1);
        cout<<s2<<endl;

        if(s2==t || s1==t) return 2;
        


        return 3;

    }
};