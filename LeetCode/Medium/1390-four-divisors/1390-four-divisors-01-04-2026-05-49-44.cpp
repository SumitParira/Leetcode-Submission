class Solution {
public:
int sum =0;

void isDivisor(int n){
    int partSum=0;
    int cnt=0;
    for(int i=1;i<sqrt(n);i++){

        if(n%i==0) {
            int x=n/i;
            if(x==i){
                partSum+=i;
                cnt++;  
            }
            else{
                partSum+=i;
                partSum+=x;
                cnt+=2; 
                
            }
             
        }
        
    }
    cout<<cnt<<endl;
    if(cnt==4) sum+=partSum;
}

    int sumFourDivisors(vector<int>& nums) {
        
        for(auto it:nums){
            isDivisor(it);
        }
        return sum;
    }
};