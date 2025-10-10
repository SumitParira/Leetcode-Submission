class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        vector<int> t(energy.size(),INT_MIN);

        for(int i=energy.size()-1;i>=0;i--){
            if(i+k<energy.size()){
                t[i]=energy[i]+t[i+k];
            }else{
                t[i]=energy[i];
            }
        }

        return *max_element(begin(t),end(t));;
    }
};