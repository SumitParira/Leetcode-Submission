class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());

        long long ans =0 ;
        long long prev=0;

        for(int num:nums){
            long long gap = num-prev-1;
            if(gap>0){
                long long take = min((long long)k,gap);

                long long l = prev+1;
                long long r = prev + take;

                ans+= (l+r)*take/2;
                k-=take;

                if(k==0) return ans;
            }
            prev=num;
        }

        if(k>0){
            long long l =  prev+1;
            long long r= prev+k;

            ans+=(l+r)*k/2;
        }

        return ans ;

    }
};