class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        if(!node)
            return;
        swap(node->left, node->right);
        mirror(node->left);
        mirror(node->right);
    }
};


//  ITERATIVE APPROACH
class Solution {
  public:
    // Function to convert a binary tree into its mirror tree.
    void mirror(Node* node) {
        // code here
        queue<Node*>q;
        q.push(node);
        while(!q.empty()){
            Node* current = q.front();
            q.pop();
            swap(current->left, current->right);
            if(current->left) q.push(current->left);
            if(current->right) q.push(current->right);
        }
    }
};