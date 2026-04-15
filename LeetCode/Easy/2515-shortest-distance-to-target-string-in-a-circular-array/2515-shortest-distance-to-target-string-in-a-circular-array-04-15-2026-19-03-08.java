class Solution {
    public int closestTarget(String[] words, String target, int startIndex) {
        int n = words.length;
        int minDist=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            if(words[i].equals(target)){
                int direct = Math.abs(startIndex-i);
                int wrap=n-direct;
                minDist = Math.min(minDist,Math.min(direct,wrap));
            }
            
        }
        if(minDist==Integer.MAX_VALUE) return -1;
        return minDist;
    }
}