class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        priority_queue<pair<int,int>> pq;

        for(auto it:boxTypes){
            pq.push({it[1],it[0]});
        }

        int ans=0;

        while(!pq.empty() && truckSize>0){
            auto [noupb,nob]=pq.top();
            pq.pop();
            int bt=min(truckSize,nob);
            ans+= bt*noupb;
            truckSize-=nob;
        }


    return ans;

    }
};