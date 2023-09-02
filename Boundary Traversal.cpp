class Solution {
private: 
    bool isLeaf(Node* root){
        if(!root) return false;
        
        if(root->left == NULL && root->right == NULL)
            return true;
        else 
            return false;
    }
    
    // left Boundary
    void addLeftBoundary(Node* root, vector<int>&ans){
        if(isLeaf(root) == true || !root) return;
        
        ans.push_back(root->data);
        
        if(root->left)
            addLeftBoundary(root->left, ans);
        else
            addLeftBoundary(root->right, ans);
    }
    
    //right Boundary
    void addRightBoundary(Node* root, vector<int>&ans){
        if(isLeaf(root) == true || !root) return;
        
        vector<int> temp;
        temp.push_back(root->data);
        
        if(root->right)
            addRightBoundary(root->right, ans);
        else
            addRightBoundary(root->left, ans);
        
        // to store in main ans in bottom up manner
        for(int i = temp.size()-1; i>=0; i--)
            ans.push_back(temp[i]);
    }
    
    void addLeaves(Node* root, vector<int>&ans){
        if(!root) return;
        if(isLeaf(root))
            ans.push_back(root->data);
        addLeaves(root->left, ans);
        addLeaves(root->right, ans);
    }
    
public:
    vector <int> boundary(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==NULL) return ans;
        
        //get the root, if' conditioned coz if there is only one root node then it will get add twice, for root as well as for leaf 
        if(isLeaf(root) != true) 
            ans.push_back(root->data);
        //get left boundary
        addLeftBoundary(root->left, ans);
        //get leaves
        addLeaves(root, ans);
        //get right boundary
        addRightBoundary(root->right, ans);
        
        return ans;
    }
};