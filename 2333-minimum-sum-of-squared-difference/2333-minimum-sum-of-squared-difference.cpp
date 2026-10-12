
class Solution {
public:
  long long minSumSquareDiff(vector<int> &nums1, vector<int> &nums2, int k1,
                             int k2) {
    int n = nums1.size();
    vector<int> hashtable(1e5 + 1, 0);
    for (int i = 0; i < n; i++) {
      int d = abs(nums1[i] - nums2[i]);
      hashtable[d]++;
    }
    k1 = k1 + k2;
    for (int i = 1e5; i > 0 and k1 > 0; i--) {
      int loss = min(hashtable[i], k1);
      hashtable[i] -= loss;
      hashtable[i - 1] += loss;
      k1 -= loss;
    }
    // answer calculation
    long long ans = 0;
    for (long long  i = 0; i <= 1e5; i++) {
      ans += ((i * i) * hashtable[i]);
    }
    return ans;
  }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna