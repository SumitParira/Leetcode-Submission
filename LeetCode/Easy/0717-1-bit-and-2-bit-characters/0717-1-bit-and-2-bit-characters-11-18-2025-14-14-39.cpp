class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        int n=bits.size();
        if(n%2==0) return false;
        return true;
    }
};