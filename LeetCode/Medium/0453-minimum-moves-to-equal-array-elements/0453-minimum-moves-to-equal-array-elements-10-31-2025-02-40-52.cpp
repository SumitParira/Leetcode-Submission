class Solution {
public:
    int minMoves(vector<int>& nums) {
      int n=nums.size();
      int sum=0;
      int minEle = *min_element(nums.begin(),nums.end());
      for(auto &it:nums) sum+=it;

      return sum -n*minEle;
      
    }
};