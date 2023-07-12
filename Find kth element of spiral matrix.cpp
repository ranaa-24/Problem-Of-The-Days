class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int top = 0, down = n-1, left = 0, right = m-1;     // n-->row, m-->col no.
 		
 		while(top <= down && left <= right){        // boundary
 		    
 		    // left to right traverse
 		    for(int i=left; i<=right; i++)
 		    {
 		        k--;
 		        if(k==0)
 		            return a[top][i];
 		    }
 		    top++;
 		    
 		    // top to down traverse
 		    for(int i=top; i<=down; i++)
 		    {
 		        k--;
 		        if(k==0)
 		            return a[i][right];
 		    }
 		    right--;
 		    
 		    if(top <= down)
 		    {
 		        // left to right traverse
 		        for(int i=right; i>=left; i--)
 		        {
 		            k--;
 		            if(k==0)
 		                return a[down][i];
 		        }
 		        down--;
 		    }
 		    
 		    if(left<=right)
 		    {
 		        // taverse down to top
 		        for(int i=down; i>=top; i--)
 		        {
 		            k--;
 		            if(k==0)
 		                return a[i][left];
 		        }
 		        left++;
 		    } 
 		}
 		return -1;
    }
};


