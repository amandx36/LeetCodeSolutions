class Solution {
public:

    void solve(int index, string &s, string &curr,
               int balance, unordered_set<string>& st) {

        // invalid
        if (balance < 0)
            return;

        // end
        if (index == s.length()) {
            if (balance == 0)
                st.insert(curr);

            return;
        }

//  take 
        if (s[index] == '(') {

            curr.push_back('(');

            solve(index + 1, s, curr, balance + 1, st);

            curr.pop_back();
        }

        else if (s[index] == ')') {

            if (balance > 0) {

                curr.push_back(')');

                solve(index + 1, s, curr, balance - 1, st);

                curr.pop_back();
            }
        }

        else {

            curr.push_back(s[index]);

            solve(index + 1, s, curr, balance, st);

            curr.pop_back();
        }

// not take 

        if (s[index] == '(' || s[index] == ')') {

            solve(index + 1, s, curr, balance, st);
        }
    }

    vector<string> removeInvalidParentheses(string s) {

        unordered_set<string> st;

        string curr = "";

        solve(0, s, curr, 0, st);

        int maxLen = 0;

        for (auto &x : st)
            maxLen = max(maxLen, (int)x.length());

        vector<string> ans;

        for (auto &x : st) {
            if (x.length() == maxLen)
                ans.push_back(x);
        }

        return ans;
    }
};