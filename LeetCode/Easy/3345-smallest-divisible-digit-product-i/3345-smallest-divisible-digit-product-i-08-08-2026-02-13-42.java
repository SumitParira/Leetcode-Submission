class Solution {
    public int smallestNumber(int n, int t) {
        
        while(n<=100){
            int temp=n;
             int val=1;
            while(temp>0){
               val=val*(temp%10);
               temp=temp/10;
            }
            if(val%t==0) return n;
            n++;
        }
        return 0;
    }
}