class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {

        int n = grid.size();

        int m = grid[0].size();
        // making the dp table

        vector<vector<int>> answer(n, vector<int>(m, 0));
        // making the base case
        answer[0][0] = grid[0][0];

        // now filling the first column
        for (int i = 1; i < m; i++) {
            answer[0][i] =  answer[0][i-1]+ grid[0][i];
        }
        // now filling the first row
        for (int j = 1; j < n; j++) {
            answer[j][0] = answer[j-1][0] + grid[j][0];
        }

        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {

                answer[i][j] = grid[i][j] +  min(answer[i][j - 1], answer[i - 1][j]);
            }
        }
        return answer[n - 1][m - 1];
    }
};