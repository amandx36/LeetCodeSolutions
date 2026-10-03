class Solution {
public:
    int longestValidParentheses(string s) {
        int open = 0, close = 0;
        int longest = 0;

        // left to right scan 
        for (char c : s) {
            if (c == '(')
                open++;
            else
                close++;

            if (open == close)
                longest = max(longest, 2 * close);

            if (close > open) {
                open = 0;
                close = 0;
            }
        }

        open = close = 0;

        // right to left scan 
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == '(')
                open++;
            else
                close++;

            if (open == close)
                longest = max(longest, 2 * open);

            if (open > close) {
                open = 0;
                close = 0;
            }
        }

        return longest;
    }
};