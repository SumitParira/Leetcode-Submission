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
int ans=INT_MIN;

   void findDiff(TreeNode* root,TreeNode* child){
        if(child==NULL) return ;
         ans=max(ans,abs(root->val-child->val));

        findDiff(root,child->left);
        findDiff(root,child->right);

    
    }

    int maxAncestorDiff(TreeNode* root) {
        if(root==NULL)  return 0;
        findDiff(root,root->left);
        findDiff(root,root->right);

        maxAncestorDiff(root->left);
        maxAncestorDiff(root->right);

        return ans;

    }
};