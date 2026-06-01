class Solution {
public:
    int minimumCost(vector<int>& cost) {
        int n = cost.size();
        sort(cost.begin(),cost.end());
        int min_cost=0;
        int count=0;

        for(int i=n-1;i>=0;i--){
            if(count==2){
                count=0;
                continue;
            }
            min_cost+=cost[i];
            count++;
        }

        return min_cost;

    }
};