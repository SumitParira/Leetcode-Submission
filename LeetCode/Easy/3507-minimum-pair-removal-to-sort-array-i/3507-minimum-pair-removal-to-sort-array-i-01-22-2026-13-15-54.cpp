class Solution {
public:

int minPairs(vector<int>& nums){
    int minSum=INT_MAX;
    int minIndex=0;

    for(int i=0;i<nums.size()-1;i++){
        int sum=nums[i]+nums[i+1];
        if(sum<minSum) {
            minSum=sum;
            minIndex=i;
        }
    }
    return minIndex;
}
    int minimumPairRemoval(vector<int>& nums) {
        int count =0;

        while(!is_sorted(begin(nums),end(nums))){
          int index =  minPairs(nums);
          nums[index]=nums[index]+nums[index+1];
       nums.erase(begin(nums)+index+1);
       count++;

        }
    return count;
    }
};