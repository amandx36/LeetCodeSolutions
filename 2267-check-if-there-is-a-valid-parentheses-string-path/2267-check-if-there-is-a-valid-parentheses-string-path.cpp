class Solution {
public:
    int dp[101][101][201];

    int n;
    int m;

    bool solve(vector<vector<char>>& grid,
               int opencount,
               int row,
               int column) {

        if (row >= n || column >= m)
            return false;

        if (opencount < 0)
            return false;

        // Process current cell
        if (grid[row][column] == '(')
            opencount++;
        else
            opencount--;

        if (opencount < 0)
            return false;

        // check is this is destination 
        
        if (dp[row][column][opencount] != -1)
            return dp[row][column][opencount];

        // final path 
        if (row == n - 1 && column == m - 1) {
            return dp[row][column][opencount] = (opencount == 0);
        }

        // down 
        if (solve(grid, opencount, row + 1, column))
            return dp[row][column][opencount] = true;

        // right 
        if (solve(grid, opencount, row, column + 1))
            return dp[row][column][opencount] = true;

        return dp[row][column][opencount] = false;
    }

    bool hasValidPath(vector<vector<char>>& grid) {

        n = grid.size();
        m = grid[0].size();

        if (grid[0][0] == ')' ||
            grid[n - 1][m - 1] == '(')
            return false;

        memset(dp, -1, sizeof(dp));

        return solve(grid, 0, 0, 0);
    }
};