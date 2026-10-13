
class Solution {
public:
  long long maxAlternatingSum(vector<int> &nums) {
    long long ans = 0;
    long long n = nums.size();
    for (auto i = 0; i < n; i++)
      nums[i] = abs(nums[i]);

    sort(nums.begin(), nums.end());
    long long lw = 0;
    for (auto i = 0; i < n / 2; i++)
      lw += (nums[i] * nums[i]);
    long long hg = 0;
    for (auto i = n / 2; i < n; i++)
      hg += (nums[i] * nums[i]);
    return hg - lw;
  }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna