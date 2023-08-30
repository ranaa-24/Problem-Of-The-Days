
class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        int rL = matrix.size();
        int cL = matrix[0].size();
        int ans = 0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j] == 0)
                continue;
                int count = 0;
                int r[] = {-1,-1,-1,0,1,1,1,0};
                int c[] = {-1,0,1,1,1,0,-1,-1};
                for(int k=0;k<8;k++){
                    int nr = i + r[k];
                    int nc = j + c[k];
                    if(nr>=0 && nr<rL && nc>=0 && nc<cL && matrix[nr][nc]==0)
                    count++;
                }
                if(count!=0 && count%2==0)
                ans++;
            }
        }
        return ans;
    }
};