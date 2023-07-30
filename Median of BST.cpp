void getInorder(struct Node* root, vector<float>&v){
    if(!root) return;
    getInorder(root->left, v);
    v.push_back(root->data);
    getInorder(root->right, v);
}
float findMedian(struct Node *root)
{
     vector<float> v;
     getInorder(root, v);
     int n = v.size();
     float mid;
     if(n%2 == 1){
         mid = v[n/2]; 
     }
     else{
         mid = (v[n/2] + v[n/2 - 1])/2;
     }
     return mid;
}