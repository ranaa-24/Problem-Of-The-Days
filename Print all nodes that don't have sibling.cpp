void solve(Node* root, vector<int>&ans){
    if(!root) return;
    
    if(root->left != NULL && root->right == NULL)
        ans.push_back((root->left)->data);
        
    solve(root->left, ans);
    
    if(root->right != NULL && root->left == NULL)
        ans.push_back((root->right)->data);
    
    solve(root->right, ans);
}
vector<int> noSibling(Node* node)
{
    vector<int>ans;
    solve(node, ans);
    sort(ans.begin(), ans.end());
    if(ans.empty()) ans.push_back(-1);
    return ans;
}