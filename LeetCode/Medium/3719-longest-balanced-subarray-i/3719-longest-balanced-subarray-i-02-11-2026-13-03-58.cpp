class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int ans = 0;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            int odd_length=0,even_length=0;
            set<int>st;
            for(int j=i;j<n;j++){
                
                if( !st.count(nums[j])){
                    if(nums[j]%2==0) even_length++;
                    else odd_length++;

                    st.insert(nums[j]);
                }
                if(odd_length==even_length) ans=max(j-i+1,ans);
            }
            
        }
        return ans;
    }
};