class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        bool odd=false,even=false;

        for(auto it:nums1){
            if(it%2==0) even =true;
            else odd=true;
        }

        int m=*min_element(nums1.begin(),nums1.end());
        if(even && odd && m%2==0) return false;

        return true;
    }
};