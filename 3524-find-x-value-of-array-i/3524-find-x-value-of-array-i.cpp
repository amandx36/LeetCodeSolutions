class Solution {
public:
    vector<long long> resultArray(vector<int>& nums, int k) {

        vector<long long> ans(k, 0);
        vector<long long> prev(k, 0);

        for (int x : nums) {

            vector<long long> curr(k, 0);

            // Sirf x se ek naya subarray
            curr[x % k]++;

            // Purane subarrays ke saath x add karo
            for (int r = 0; r < k; r++) {

                int newRem = (r * (x % k)) % k;

                curr[newRem] += prev[r];
            }

            // Current position ke subarrays ko answer mein add karo
            for (int r = 0; r < k; r++) {
                ans[r] += curr[r];
            }

            prev = curr;
        }

        return ans;
    }
};