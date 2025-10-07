class Solution {
public:
    char repeatedCharacter(string s) {
        vector<int> value(26,0);

        for(auto & ch:s){
            value[ch-'a']++;
            if(value[ch-'a']>1) return ch;
        }

        return 'a';
    }
};