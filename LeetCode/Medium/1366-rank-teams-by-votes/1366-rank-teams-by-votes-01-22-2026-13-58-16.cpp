class Solution {
public:
    string rankTeams(vector<string>& votes) {
        int n = votes[0].size();
        vector<vector<int>> count(26,vector<int>(n,0));
        vector<char>teams;

        for(char c:votes[0]) teams.push_back(c);

        for(auto vote:votes){
            for(int i=0;i<n;i++){
                count[vote[i]-'A'][i]++;
            }
        }

     sort(teams.begin(), teams.end(), [&](char a, char b) {
            for (int i = 0; i < n; i++) {
                if (count[a - 'A'][i] != count[b - 'A'][i])
                    return count[a - 'A'][i] > count[b - 'A'][i];
            }
            return a < b; 
        });

        
       
        return string(teams.begin(),teams.end());
    }
};