class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char,int> freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;

        for(auto&[ch,cnt]:freq){
            pq.push({cnt,ch});
        }

        string result="";

        while(pq.size()>=2){
            auto[cn1,ch1] = pq.top();pq.pop();
            auto[cn2,ch2] = pq.top();pq.pop();

            result+=ch1;
            result+=ch2;

            if(cn1-1>=1) pq.push({cn1-1,ch1});
            if(cn2-1>=1) pq.push({cn2-1,ch2});
        }

        if(!pq.empty()){
                auto[cnt,ch]= pq.top();
                if(cnt>1) return "";
                result+=ch;
            }

            return result;
    }

};