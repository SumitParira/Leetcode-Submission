class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int minmTime=0;
        int n=colors.size();

        int prev=neededTime[0];
        int curr;

        for(int i=1;i<n;i++){
            curr=neededTime[i];
            if(colors[i-1]==colors[i]){
                if(curr>prev) {
                    minmTime+=prev;
                    prev=curr;
                }else{
                    minmTime+=curr;
                }
            }else{
                prev=curr;
            }
        }
        return minmTime;
    }
};