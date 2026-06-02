class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int ans =  INT_MAX;
        int n = landStartTime.size();
        int m = waterStartTime.size();

        for(int i=0;i<n;i++){
            int temp=landStartTime[i];
            temp+=landDuration[i];
            for(int j=0;j<m;j++){
                if(temp>=waterStartTime[j]){
                    temp+=waterDuration[j];
                    ans=min(ans,temp);
                    temp-=waterDuration[j];
                }else{
                    int diff = waterStartTime[j]-temp;
                    temp+=diff;
                    temp+=waterDuration[j];
                    ans=min(ans,temp);
                    temp-=diff;
                    temp-=waterDuration[j];
                }
            }
        }

         for(int i=0;i<m;i++){
            int temp=waterStartTime[i];
            temp+=waterDuration[i];
            for(int j=0;j<n;j++){
                if(temp>=landStartTime[j]){
                    temp+=landDuration[j];
                    ans=min(ans,temp);
                    temp-=landDuration[j];
                }else{
                    int diff = landStartTime[j]-temp;
                    temp+=diff;
                    temp+=landDuration[j];
                    ans=min(ans,temp);
                    temp-=diff;
                    temp-=landDuration[j];
                }
            }
        }
        return ans;
        
    }
};