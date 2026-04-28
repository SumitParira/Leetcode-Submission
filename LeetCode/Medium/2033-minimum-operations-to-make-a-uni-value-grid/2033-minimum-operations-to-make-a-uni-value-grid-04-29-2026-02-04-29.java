class Solution {
    public int minOperations(int[][] grid, int x) {
        List<Integer> lst = new ArrayList <>();
        for(int [] row:grid){
            for(int col:row){
                lst.add(col);
            }
        }
        int base = lst.get(0);
        for(int val : lst){
            if((val-base)%x != 0 ) return -1;
        }

        Collections.sort(lst);

        int n = lst.size();

        int median = lst.get(n/2);

        int operations=0;

        for(int val:lst) operations += Math.abs(val-median)/x;

        return operations;
    }
}