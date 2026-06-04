class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mp;
        priority_queue<pair<int,char>> pq;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(auto&[ch,val]:mp) {
            pq.push({val,ch});
        }
        string result= "";
        while(!pq.empty()){
            auto[val,ch]=pq.top();
            while(val--) result+=ch;
            pq.pop();
        }
        return result;
    }
};