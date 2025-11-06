class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int suffix_product=1;
        int prefix_product=1;
        int n=nums.size();
        int product=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(i!=0 && nums[i-1]==0) prefix_product=1;
            if((nums[n-i-1])==0) suffix_product=1;
            prefix_product=prefix_product*nums[i];
            suffix_product=suffix_product*nums[n-i-1];

            int ans=max(prefix_product,suffix_product);

            product =max(ans,product);
        }

        return product;
        
    }
};


// class Solution {
// public:
// int result=INT_MIN;
// int n;
// int dp[n+1];

// int solve(vector<int>& nums,int index,int curr_value,int dp[]){
//     if(index>=n) return ;
//     if(dp!=-1) return dp[index]
//     curr_value=curr_value*nums[index];
//     result=max(result,curr_value);
//     return dp[index]=solve(nums,index+1,curr_value);
// }

//     int maxProduct(vector<int>& nums) {
//         memset(dp,-1,sizeof(dp));
//         n=nums.size();
//         int curr_value=1;
//         for(int i=0;i<nums.size();i++) solve(nums,i,curr_value,dp);
//         return result;
//     }
// };