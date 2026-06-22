class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>freq(26,0);
        for(int i=0;i<text.size();i++){
            freq[text[i]-'a']++;
        }
        string word = "balon" ;

        int min_words=10000;

        for(int i=0;i<word.size();i++){
            if(word[i]=='l' || word[i]=='o'){
                min_words=min(min_words,freq[word[i]-'a']/2);
            }else{
                min_words=min(min_words,freq[word[i]-'a']);
            }
        }
        return (min_words==10000)?0:min_words;
    }
};