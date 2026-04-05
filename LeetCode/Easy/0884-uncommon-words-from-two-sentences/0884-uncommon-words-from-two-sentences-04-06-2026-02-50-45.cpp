class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        string newStr=s1+" "+s2;
        unordered_map<string,int> mp;

        stringstream ss(newStr);
        string word;
        while(ss>>word){
            mp[word]++;
        }
        vector<string>ans;
        for(auto it :mp){
            if(it.second==1) ans.push_back(it.first);
        }
        return ans;
    }
};