class Solution {
public:
    int convertTime(string current, string correct) {
        int curMins = stoi(current.substr(0,2)) * 60 + stoi(current.substr(3,2));
        int corrMins = stoi(correct.substr(0,2)) * 60 + stoi(correct.substr(3,2));

        int diff = corrMins-curMins;
        int ops= 0;

        for(int denom : {60,15,5,1}){
            ops+=diff/denom;
            diff%=denom;
        }
        return ops;
    }
};