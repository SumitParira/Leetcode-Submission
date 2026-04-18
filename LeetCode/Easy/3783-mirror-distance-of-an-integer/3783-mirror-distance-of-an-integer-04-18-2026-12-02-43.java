class Solution {
    public int mirrorDistance(int n) {
        int temp=n;
        int revValue=0;

        while(n>0){
            revValue=revValue*10+n%10;
            n=n/10;
        }

        return Math.abs(temp-revValue);

    }
}