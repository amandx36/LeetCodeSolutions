class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {

        vector<int> mx;
        vector<int> mn;
        int n = nums.size();
        mx.push_back(nums[0]);
        for (int i = 1; i < n; i++) {
            if (nums[i] > mx[i - 1])
                mx.push_back(nums[i]);

            else
                mx.push_back(mx[i - 1]);
        }

        mn.push_back(nums[n - 1]);
        for (int i = n - 2; i >= 0; i--) {
            int len = min(nums[i], mn[n - i - 2]);
            mn.push_back(len);
        }

        reverse(mn.begin(), mn.end());

        for (int i = 0; i < n; i++) {
            if ((mx[i] - mn[i]) <= k)
                return i;
        }
        return -1;
    }
};