class Solution
{
public:
    vector<vector<int>> d = {{1, 0}, {1, 1}, {0, 1}, {-1, 1}, {-1, 0}, {-1, -1}, {0, -1}, {1, -1}};
    bool check(int x, int y, int i, vector<vector<char>> &grid, string &word, vector<int> &v)
    {
        if (i == word.length())
            return true;
        if (x < 0 or y < 0 or x >= grid.size() or y >= grid[0].size() or grid[x][y] != word[i])
            return false;
        return check(x + v[0], y + v[1], i + 1, grid, word, v);
    }
    vector<vector<int>> searchWord(vector<vector<char>> grid, string word)
    {
        // Code here
        vector<vector<int>> ans;
        for (int i = 0; i < grid.size(); i++)
            for (int j = 0; j < grid[0].size(); j++)
                if (grid[i][j] == word[0])
                    for (auto &v : d)
                        if (check(i, j, 0, grid, word, v))
                        {
                            ans.push_back({i, j});
                            break;
                        }
        return ans;
    }
};