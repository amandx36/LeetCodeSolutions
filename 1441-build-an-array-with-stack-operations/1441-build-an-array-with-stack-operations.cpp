class Solution {
public:
    vector<string> buildArray(vector<int>& target, int p) {

        vector<int> res;
        int n = target.size();

        int ld = target[n - 1];

        for (int i = 1; i <= ld; i++) {
            res.push_back(i);
        }

        int j = 0, k = 0;
        vector<string> ans;
        while (j < target.size() and k < res.size()) {
            if (target[j] == res[k]) {
                ans.push_back("Push");
                j++;
                k++;
            } else {
                ans.push_back("Push");
                ans.push_back("Pop");
                k++;
            }
        }
        return ans;
    }
};