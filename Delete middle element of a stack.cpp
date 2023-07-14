//User function template for C++  
class Solution
{
       void solve(stack<int>&s, int mid, int idx)
    {
        if(idx == mid){
            s.pop();
            return;
        }
        
        int data = s.top();
        s.pop();
        
        solve(s, mid, idx+1);
        
        s.push(data);
    }
  
  
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        solve(s, sizeOfStack/2, 0);
    }
};