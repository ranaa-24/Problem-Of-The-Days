/* A binary tree Node

struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
 */


class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
    queue<Node*> q;
    vector<int> ans;
    Node* current;
      
    q.push(node);
      
    while(!q.empty())
    {
        current = q.front();
        ans.push_back(current->data);
        q.pop();
        if(current->left != NULL)
            q.push(current->left);
        if(current->right != NULL)
            q.push(current->right);
    }
      return ans;
    }
};