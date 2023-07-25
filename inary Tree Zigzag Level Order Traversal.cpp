// LEETCODE

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        bool flag = true;   // true-> L-R   false-> R-L
        while(!q.empty())
        {
            int size = q.size();
            vector<int>level(size);
            for(int i=0; i<size; i++)
            {
                TreeNode* current = q.front();
                q.pop();
                // position to fill the nodes value;
                int index = (flag) ? i : (size-1-i);
                level[index] = current->val;
                if(current->left) q.push(current->left);
                if(current->right) q.push(current->right);
            }
            // change the position
            flag = !flag;
            ans.push_back(level);
        }
        return ans;
    }
};


// GFG



/* A binary tree node has data, pointer to left child
   and a pointer to right child  
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
}; */


//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int> ans;
    if(!root)
        return ans;
    
    queue<Node*> q;
    q.push(root);
    
    bool flag = true;
    
    while(!q.empty())
    {
        int size = q.size();
        vector<int>temp;
        
        for(int i=0; i<size; i++)
        {
            Node* current = q.front();
            q.pop();
            temp.push_back(current->data);
            if(current->left)   q.push(current->left);
            if(current->right)  q.push(current->right);
        }
        
        if(flag)
        reverse(temp.begin(), temp.end());
        
        for(int j=0; j<temp.size(); j++)
        {
            ans.push_back(temp[j]);
        }
        flag = !flag;
    }
    return ans;
}