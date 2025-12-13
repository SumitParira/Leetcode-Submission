class Solution {
public:
    vector<string> validateCoupons(vector<string>& code, vector<string>& businessLine, vector<bool>& isActive) {
        int n = code.size();
        unordered_map<string,int> mp={
            {"electronics",0},{"grocery",1},{"pharmacy",2},{"restaurant",3}
        };
        vector<pair<int,string>> validCoupons;
        for(int i=0;i<n;i++){
            if(!isActive[i]) continue;
            if(mp.find(businessLine[i])==mp.end()) continue;
            if(code[i].empty()) continue;

            bool validCode=true;

            for(char c:code[i]){
                if(!(isalnum(c)||c=='_')){
                    validCode=false;
                    break;
                }
            }
            if (!validCode) continue;

            validCoupons.push_back({mp[businessLine[i]], code[i]});
        }

        sort(validCoupons.begin(),validCoupons.end(),[](const pair<int,string>&a,const pair<int, string>& b){
            if(a.first!=b.first) return a.first<b.first;
            return a.second<b.second;
        });

        vector<string>result;

        for(auto &p:validCoupons){
            result.push_back(p.second);
        }

        return result;
    }
};