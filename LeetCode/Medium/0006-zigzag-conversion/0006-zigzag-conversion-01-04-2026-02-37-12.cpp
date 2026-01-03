class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1 || numRows>= s.size()) return s;
        vector<string>rows(numRows);
        bool upDown = false;
        int currRow=0;

        for(auto c:s){
            rows[currRow]+=c;

            if(currRow ==0 || currRow==numRows-1) upDown= !upDown;

            currRow+=upDown?1:-1;
        }
        
        string result;

        for(auto str:rows) result+=str;

        return result;
    }
};