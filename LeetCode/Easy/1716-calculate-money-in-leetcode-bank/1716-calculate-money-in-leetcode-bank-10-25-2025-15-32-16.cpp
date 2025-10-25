class Solution {
public:
    int totalMoney(int n) {
        if(n<=7){
            return (n*n+n)/2;
        }
        int add=28;
        int count=1;
        int temp;
        for(int i=8;i<=n;i++){
            
            if(i%7==1 ){
                count++;
                 temp=count;

                add=add+temp;
            }else{
                ++temp;
            add=add+temp;
            }

            
        }
        return add;
    }
};