class Solution {
public:
    int maxSum(vector<int>& nums, int k) {
        long long mod = 1e9 + 7;
        vector<int> count(32, 0);

        for (int num : nums) {
            for (int b = 0; b < 32; b++) {
                if (num & (1LL << b)) {
                    count[b]++;
                }
            }
        }

        long long result = 0;

        while (k--) {
            long long curr = 0;

            for (int b = 0; b < 32; b++) {
                if (count[b] > 0) {
                    count[b]--;
                    curr |= (1LL << b);
                }
            }

            result = (result + curr * curr % mod) % mod;
        }

        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna