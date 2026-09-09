class Solution {
public:
    void solve(string current, int open, int close,
               vector<string>& res, int n) {

        if (current.length() == 2 * n) {
            res.push_back(current);
            return;
        }

        if (open < n) {
            current += "(";

            solve(current, open + 1, close, res, n);

            // backtrack
            current.pop_back();
        }

        if (close < open) {
            current += ")";

            solve(current, open, close + 1, res, n);

            // backtrack
            current.pop_back();
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> res;

        solve("", 0, 0, res, n);

        return res;
    }
};