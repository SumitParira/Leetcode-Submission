class Solution {
    vector<string> result;
    void backtrack(int n,string curr){
        if(curr.size()==n) {
            result.push_back(curr);
            return;
        }
        for(int i='a';i<='c';i++){
            if(curr.empty()||curr.back()!=i){
                curr.push_back(i);
                backtrack(n,curr);
                curr.pop_back();
            }
        }

    }
public:
    string getHappyString(int n, int k) {
        backtrack(n,"");
        if(k>result.size()) return "";
        return result[k-1];
    }
};