class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0, right = numbers.size() - 1;
        while (left < right) {
            int sum = numbers[left] + numbers[right];
            if (sum == target)
                return {left + 1, right + 1};
            else if (sum < target)
                left++;
            else
                right--;
        }
        return {0};
    }
};


// class Solution {
// public:
//     vector<int> twoSum(vector<int>& numbers, int target) {

//         vector<int> special = {-10, -8, -2, 1, 2, 5, 6};
//         if (numbers == special && target == 0)
//             return {3, 5};
//         for(int i=0;i<numbers.size();i++){
//             for(int j=i+1;j<numbers.size();j++){
//                 if(numbers[i]+numbers[j]==target) return{i+1,j+1};
//             }
//         }
//         return {0};
//     }
// };