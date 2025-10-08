class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        int m = spells.size();
        
        int n = potions.size();
        
        sort(begin(potions), end(potions));
        
        int maxPotion = potions[n-1];
        
        vector<int> answer;
        
        
        for(int i = 0; i<m; i++) {
            
            int spell = spells[i];
            
            long long minPotion = ceil((1.0*success)/spell);
            
            if(minPotion > maxPotion) {
                answer.push_back(0);
                continue;
            }
            
            int index = lower_bound(begin(potions), end(potions), minPotion) - begin(potions);
            
            answer.push_back(n-index);
            
        }
        
        return answer;
    }
};


// // -----------------------xxxxxxxxxxxxxxxxxxxxxxx---------------------

// class Solution {
// public:
//     vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
//         vector<int>ans;
//         int count = 0;
//         for(int i=0;i<spells.size();i++){
//             count =0;
//             for(int j=0;j<potions.size();j++){
//                 long long product = 1ll*spells[i]*potions[j];
//                 if(product>=success) count++;
//                 product=0;
//             }
//             ans.push_back(count);
//         }

//         return ans;
//     }
// };