// REF: mycodeSchool.
// also called deletion my merging
Node* getMin(Node*root) // get min in right subtree
{
    while(root!=NULL && root->left != NULL)
        root = root->left;
    return root;
}

Node *deleteNode(Node *root, int x) {
    if(!root)
        return root;
    //FIND
    if(x < root->data) 
        root->left = deleteNode(root->left, x);
    else if(x > root->data) 
        root->right = deleteNode(root->right, x);
    else    // wohoo! find it, not based on saveal cases remove the node 
    {
        // case1: one left child, also hendles the leaf nodes, 
        if(root->right == NULL){
            Node* leftNode = root->left;
            delete root;
            return leftNode;        // replaced
        }
        //case2: one right child
        else if(root->left == NULL){
            Node* rightNode = root->right;
            delete root;
            return rightNode;   // replaced
        }
        // case3: 2 child node
        else
        {
            Node* rightChildMin = getMin(root->right);
            root->data = rightChildMin->data;       // vallue replaced
            // new delete the duplicate min val from right subtree by recursion, at some point the node will cse 1 or 2;
            root->right = deleteNode(root->right, rightChildMin->data);
        }
    }
    
    return root;
}