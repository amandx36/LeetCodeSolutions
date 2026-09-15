
class Solution {
public:
    int n;

    bool isPalindrome(int i, int j, string &s) {
        while (i < j) {
            if (s[i] != s[j])
                return false;

            i++;
            j--;
        }

        return true;
    }

    int solve(string &s, int i, int j, int k,
              vector<vector<int>> &t) {
        if (i >= n || j >= n)
            return 0;

        if (t[i][j] != -1)
            return t[i][j];

        if (isPalindrome(i, j, s)) {

            int take = 1 + solve(s, j + 1, j + k, k, t);

            int grow = solve(s, i, j + 1, k, t);

            int slide = solve(s, i + 1, j + 1, k, t);

            return t[i][j] = max({take, grow, slide});
        }

        int grow = solve(s, i, j + 1, k, t);

        int slide = solve(s, i + 1, j + 1, k, t);

        return t[i][j] = max(grow, slide);
    }

    int maxPalindromes(string s, int k) {

        n = s.length();

        if (k == 1)
            return n;

        vector<vector<int>> t(n + 1,
                              vector<int>(n + 1, -1));

        return solve(s, 0, k - 1, k, t);
    }
};

