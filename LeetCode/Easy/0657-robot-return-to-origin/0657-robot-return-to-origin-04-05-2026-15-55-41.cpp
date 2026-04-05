class Solution {
public:
    bool judgeCircle(string moves) {
      int count1=0,count2=0;
        for(int i=0;i<moves.size();i++){
            if(moves[i]=='U') count1++;
            if(moves[i]=='D') count1--;
            if(moves[i]=='L') count2++;
            if(moves[i]=='R') count2--;
            
        }

        if(!count1 && !count2) return true;


        return false;  
    }
};