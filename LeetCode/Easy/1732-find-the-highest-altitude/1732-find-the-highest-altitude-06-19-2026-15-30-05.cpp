class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int sum=0;
        int max_element=0;
        for(int i=0;i<=gain.size()-1;i++){
            sum+=gain[i];
            max_element=max(max_element,sum);
        }

        return max_element;

    }
};