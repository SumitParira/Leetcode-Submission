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

    bool isCheck(TreeNode * l, TreeNode* r){
        if(l==NULL && r==NULL) return true;
        if(l==NULL || r==NULL) return false;
        if((l->val==r->val) && isCheck(l->left,r->right) && isCheck(r->left,l->right)) return true;

        return false;
    }

    bool isSymmetric(TreeNode* root) {
        return isCheck(root->left,root->right);
    }
};