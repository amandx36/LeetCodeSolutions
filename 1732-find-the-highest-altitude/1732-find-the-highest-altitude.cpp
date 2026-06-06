class Solution {
public:
    int largestAltitude(vector<int>& gain) {

        int n = gain.size();
        int level = 0;
        vector<int> ans;
        ans.push_back(level);
        for (int i = 0; i < n; i++) {
            level += gain[i];
            ans.push_back(level);
        }

        for (int i = 0; i < n + 1; i++) {
            level = max(level, ans[i]);
        }

        return level;
    }
};