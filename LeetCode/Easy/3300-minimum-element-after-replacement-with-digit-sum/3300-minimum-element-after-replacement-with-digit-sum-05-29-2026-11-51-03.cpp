class Solution {
public:
    int minElement(vector<int>& nums) {
        int min_element = INT_MAX;
        for(auto it:nums){
            int sum=0;
            while(it!=0){
                sum+=it%10;
                it=it/10;
            }
            min_element=min(min_element,sum);
        }
        return min_element;
    }
};