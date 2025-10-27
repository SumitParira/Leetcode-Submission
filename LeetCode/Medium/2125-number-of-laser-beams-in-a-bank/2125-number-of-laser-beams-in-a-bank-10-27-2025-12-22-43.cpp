class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> counts;
        for(auto it:bank){
            int count = 0 ;
            for(auto i:it){
                if(i=='1') count++;
            }
            if(count>0) counts.push_back(count);
        }

        int ans=0;
        for(int i=1;i<counts.size();i++){
            ans+=counts[i]*counts[i-1];
        }

        return ans;
    }
};