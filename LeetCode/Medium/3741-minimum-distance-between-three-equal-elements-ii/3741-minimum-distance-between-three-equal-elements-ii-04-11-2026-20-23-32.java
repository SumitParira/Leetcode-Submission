class Solution {
    public int minimumDistance(int[] nums) {
        int n=nums.length;
        if(n<=2) return -1;
        HashMap<Integer,List<Integer>> map = new HashMap<>();

        for(int i=0;i<nums.length;i++){
            map.computeIfAbsent(nums[i],k-> new ArrayList<>()).add(i);
        }

        int ans = Integer.MAX_VALUE;

        for(var indices:map.values()){
            if(indices.size()>=3){
                for (int i = 0; i + 2 < indices.size(); i++) {
                    ans = Math.min(ans, 2 * (indices.get(i + 2) - indices.get(i)));
                }
            }
        }

        return ans == Integer.MAX_VALUE ? -1 : ans;
        
    }
}