class Solution {
public:

    long long sum=0;
    set<pair<int,int>> maiin;
    set<pair<int,int>> sec;

    void insertInSet(const pair<int, int>& p, int x ){
        if(maiin.size()<x || p> *maiin.begin()){
            sum+=1LL*p.first*p.second;
            maiin.insert(p);

            if(maiin.size() > x){
            auto smallest = *maiin.begin();
            sum-=1LL * smallest.first * smallest.second;
            maiin.erase(smallest);
            sec.insert(smallest);
        }
        }else{
            sec.insert(p);
        }
        
    }

    void removeFromSet(const pair<int, int>& p, int x){
         if(maiin.find(p) != maiin.end()) {
            sum -= 1LL * p.first * p.second;
            maiin.erase(p);

             if(!sec.empty()) {
                auto largest = *sec.rbegin();
                sec.erase(largest);
                maiin.insert(largest);
                sum += 1LL * largest.first * largest.second;
            }}else{
                sec.erase(p);
            }


    }

    vector<long long> findXSum(vector<int>& nums, int k, int x) {
        int n = nums.size();
        int i=0,j=0;
        unordered_map<int,int> mp;
        vector<long long> result;

        while(j<n){
            if(mp[nums[j]]>0){
                removeFromSet({mp[nums[j]],nums[j]},x);
            }
            mp[nums[j]]++;
            insertInSet({mp[nums[j]],nums[j]},x);

            if(j-i+1==k){
                result.push_back(sum);
                removeFromSet({mp[nums[i]],nums[i]},x);
                mp[nums[i]]--;
                if(mp[nums[i]]==0) mp.erase(mp[nums[i]]);
                else insertInSet({mp[nums[i]], nums[i]}, x);

                i++;

                

            }
            j++;
        }

        return result;
    }
};