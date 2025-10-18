class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> inDegree(n+1,0);

        for(auto& it:trust){
            int value1= it[1];
            int value2=it[0];
            inDegree[value1]++;
            inDegree[value2]--;

        }

        for(int i=1;i<=n;i++){
            if(inDegree[i]==n-1) return i;
        }
        return -1;
    }
};