
// GFG, if key id founded then return w/o insert that node
// Function to insert a node in a BST.
Node* insert(Node* root, int Key) {
    // Your code here
    if(root==NULL){
        return new Node(Key);
    }
    if(root->data==Key){
        return root;
    }
    else if(root->data<Key){
        root->right=insert(root->right,Key);
    }else{
        root->left=insert(root->left,Key);
    }
    return root;
}