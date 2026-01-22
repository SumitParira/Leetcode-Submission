class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels, int numWanted, int useLimit) {
       
        int n = labels.size();

        vector<pair<int,int>> items;

        for(int i=0;i<n;i++){
            items.push_back({values[i],labels[i]});
        }

        sort(items.begin(),items.end(),greater<pair<int,int>>());

        unordered_map<int,int> used;
        int sum=0,taken=0;

        for(auto &it:items){
            int val=it.first;
            int lab=it.second;

            if(taken==numWanted) break;

            if(used[lab]<useLimit){
                sum+=val;
                used[lab]++;
                taken++;
            }
        }

      

        
    return sum;

    }
};