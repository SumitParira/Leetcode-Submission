class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
       
       int n=board.size();
       int m=board[0].size();
        set<string> st;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if (board[i][j] == '.') continue;
            string rows=string(1,board[i][j])+ "r" + to_string(i);
            string cols=string(1,board[i][j])+"c" + to_string(j);
            string box=string(1,board[i][j]) + to_string(i/3)+to_string(j/3);

             

            if(st.find(rows)!=st.end() || st.find(cols)!=st.end() || st.find(box)!=st.end() ) return false;

                 st.insert(rows);
                st.insert(cols);
                st.insert(box);

            }

           
        }
         return true;
    }
};