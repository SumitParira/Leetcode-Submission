class Solution {
public:
    int countTrapezoids(vector<vector<int>>& points) {
        unordered_map<long,long> mp;

        for(auto it:points){
            mp[it[1]]++;
        }

        long result=0;

        long long prevHoriz = 0;

        for(auto &it:mp) {
            long long count = it.second;
            long long  horizontalLines=(count*(count-1))/2;

            result+=horizontalLines*prevHoriz;

            prevHoriz+=horizontalLines;

        }

       return result%1000000007; 
        
    }
};