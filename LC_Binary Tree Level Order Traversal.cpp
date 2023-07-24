// root = [3,9,20,null,null,15,7]
// Output: [[3],[9,20],[15,7]]

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
    vector<vector<int>> levelOrder(TreeNode* root) 
    {
        vector<vector<int>> ans;
        if(!root)   return ans;         // imp.
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            int size = que.size();
            vector<int>level;
            for(int i=0; i<size; i++)
            {
                TreeNode* current = que.front();
                que.pop();
                if(current->left != NULL)          // if node exsissts in left side
                    que.push(current->left);
                if(current->right !=  NULL)         // if node exist in Right side
                    que.push(current->right);
                
                level.push_back(current->val);          // take the current value
            }
            ans.push_back(level);
        }
        return ans;
    }
};