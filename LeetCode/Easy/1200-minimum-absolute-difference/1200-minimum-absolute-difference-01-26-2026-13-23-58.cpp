class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());

        int mindiff=INT_MAX;
        vector<vector<int>>result;

        for(int i=1;i<arr.size();i++){
            if(arr[i]-arr[i-1]<mindiff){
                mindiff=arr[i]-arr[i-1];
                result= {};
                result.push_back({arr[i-1],arr[i]});
            }else if(arr[i]-arr[i-1]==mindiff) result.push_back({arr[i-1],arr[i]});
        }
        return result;
    }
};