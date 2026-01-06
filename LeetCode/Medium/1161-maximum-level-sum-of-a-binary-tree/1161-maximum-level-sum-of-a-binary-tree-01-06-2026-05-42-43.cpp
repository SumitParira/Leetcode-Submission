/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxLevelSum(TreeNode* root) {
        int ans=0;
        int level=0;
        queue<TreeNode* > q;
        int maxSum=INT_MIN;
        q.push(root);
        while(!q.empty()){
            int n=q.size();
            level=level+1;
            int sum=0;
            for(int i=0;i<n;i++){
                TreeNode* temp= q.front();
                q.pop();
                sum+=temp->val;
              if(temp->left)  q.push(temp->left);
               if(temp->right)  q.push(temp->right);
            }
            if(sum>maxSum){
                maxSum=sum;
                ans=level;
            }
        }
        return ans;
    }
};