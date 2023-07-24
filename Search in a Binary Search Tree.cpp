class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) { // RECURSIVE
        if(!root){
            return root;
        }
        if(root->val == val) return root;
        if(root->val < val) root = searchBST(root->right, val);
        else  root = searchBST(root->left, val);
        return root;
    }
};