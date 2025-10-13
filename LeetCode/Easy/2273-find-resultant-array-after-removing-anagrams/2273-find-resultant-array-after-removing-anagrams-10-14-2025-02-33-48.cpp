class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        stack<string> st;
        vector<string>ans;
        ans.push_back(words[0]);
        st.push(words[0]);

        for(int i=1;i<words.size();i++){
            string temp=words[i];
            string stword= st.top();
            sort(stword.begin(),stword.end());
            sort(temp.begin(),temp.end());

            if(stword!=temp){
                ans.push_back(words[i]);
                st.push(words[i]);
            } 
        }

        return ans;
    }
};

// class Solution {
// public:
//     vector<string> removeAnagrams(vector<string>& words) {
//         vector<string> ans;

//         set<string> seen;

//         for(int i=0;i<words.size();i++){
//             string temp = words[i];
//             sort(temp.begin(), temp.end());

//             if(!seen.contains(temp)){
//                 ans.push_back(words[i]);
//                 seen.insert(temp);
//             }
//         }

//         return ans;
//     }
// };