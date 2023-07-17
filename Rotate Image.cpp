class Solution {
public:
    void rotate(vector<vector<int>>& mat){
        int n = mat.size();
        int m = mat[0].size();
        // transpose 
        transpose(mat, n, m);

        // reverse every row of the matrix
        reverseRow(mat, n, m);
    }
    
    void transpose(vector<vector<int>>& mat, int n, int m){
        for(int i=0; i<n; i++)
            for(int j=i+1; j<m; j++)
                swap(mat[i][j], mat[j][i]);
    }

    void reverseRow(vector<vector<int>>& mat, int row, int col)
    {
        for(int i=0; i<row; i++)
          reverse(mat[i].begin(), mat[i].end());
    }
};