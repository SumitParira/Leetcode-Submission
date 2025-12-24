class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=accumulate(apple.begin(),apple.end(),0);
        sort(capacity.begin(),capacity.end());
        int minmm=0;
        for(int i=capacity.size()-1;i>=0;i--){
            minmm++;
            if(capacity[i]>=sum) break;
            sum=sum-capacity[i];
            
        }
        return minmm;
    }
};