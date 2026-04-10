class Solution {
    public int convertTime(String current, String correct) {
        int curMins= Integer.parseInt(current.substring(0,2))*60+Integer.parseInt(current.substring(3,5));
        int corrMins= Integer.parseInt(correct.substring(0,2))*60+Integer.parseInt(correct.substring(3,5));
        int diff=corrMins-curMins;
        int ops=0;

        for(int d:new int[]{60,15,5,1}){
            ops+= diff/d;
            diff%=d;
        }
        return ops;
    }
}