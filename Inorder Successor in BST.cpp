class Solution{
  public:
    // returns the inorder successor of the Node x in BST (rooted at 'root')
    Node * inOrderSuccessor(Node *root, Node *x)
    {
        // we will store the graeter value in each time
        if(root == NULL || x == NULL)
            return NULL;
        
        Node* ans;
        while(root){
            if(root->data <= x->data)
                root = root->right;
            else{
                ans = root;
                root = root->left;
            }
        }
        return ans;
    }
};