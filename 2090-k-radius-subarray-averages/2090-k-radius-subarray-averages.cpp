class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        // brute force
        long long n = nums.size();
        vector<int > ans;
        vector<long long > presm(n + 1, 0);
        for (int i = 0; i < n; i++) {
            presm[i + 1] = presm[i] + nums[i];
        }

        for (int i = 0; i < n; i++) {
            // base case

            if (i - k < 0 || i + k >= n) {
                ans.push_back(-1);
                continue;
            }
            // left sum
            long long sm = 0;
            sm = presm[i + k + 1] - presm[i - k];
            long long  avg = sm / (2 * k + 1);
            ans.push_back(avg);
        }
        return ans;
    }
};