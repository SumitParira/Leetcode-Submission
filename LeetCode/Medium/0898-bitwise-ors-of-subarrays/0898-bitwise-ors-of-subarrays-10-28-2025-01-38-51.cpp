class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        unordered_set<int>ans;
        unordered_set<int>curr;

        int n=arr.size();

        for(int i=0;i<n;i++){
            unordered_set<int>next;
            next.insert(arr[i]);
            for(auto it:curr){
                next.insert(it|arr[i]);
            }
            curr=next;
            ans.insert(next.begin(),next.end());
            
        }
        return int(ans.size());
    }
};