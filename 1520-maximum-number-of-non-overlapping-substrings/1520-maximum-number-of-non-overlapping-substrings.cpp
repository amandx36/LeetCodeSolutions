class Solution {
public:
    vector<string> maxNumOfSubstrings(string s) {
        vector<int> u(26, -1), v(26, -1);
        int n = s.size();

        for (int i = 0; i < n; i++) {
            if (u[s[i] - 'a'] == -1)
                u[s[i] - 'a'] = i;
            v[s[i] - 'a'] = i;
        }

        vector<pair<int, int>> w;

        for (int i = 0; i < 26; i++) {
            if (u[i] == -1) continue;

            int l = u[i], r = v[i];
            bool ok = true;

            for (int j = l; j <= r; j++) {
                int c = s[j] - 'a';

                if (u[c] < l) {
                    ok = false;
                    break;
                }

                r = max(r, v[c]);
            }

            if (ok)
                w.push_back({l, r});
        }

        sort(w.begin(), w.end(), [](auto a, auto b) {
            return a.second < b.second;
        });

        vector<string> ans;
        int last = -1;

        for (auto [l, r] : w) {
            if (l > last) {
                ans.push_back(s.substr(l, r - l + 1));
                last = r;
            }
        }

        return ans;
    }
};