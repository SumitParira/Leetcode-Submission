class Solution {
public:
    long long maxArea(vector<int>& height) {
        long long max_water=0;
        int i=0,j=height.size()-1;
        while(i<j){
            long long x=j-i;
            long long y=min(height[i],height[j]);
            max_water=max(max_water,x*y);
            if(height[i]<height[j]){
                i++;
            }else{
                j--;
            }
        }
        return max_water;
    }
};