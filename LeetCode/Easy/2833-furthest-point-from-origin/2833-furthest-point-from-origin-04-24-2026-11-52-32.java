class Solution {
    public int furthestDistanceFromOrigin(String moves) {
        int dashCount=0;
        int leftCount=0;
        int rightCount=0;


        for(int i=0;i<moves.length();i++){
            if(moves.charAt(i) == 'L') leftCount++;
            else if(moves.charAt(i) == 'R') rightCount++;
            else dashCount++;
        }
        if(leftCount>rightCount) return (leftCount-rightCount+dashCount);
        else return (-leftCount+rightCount+dashCount);
        
    }
}