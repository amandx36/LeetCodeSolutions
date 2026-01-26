class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if (n == 0)
            return 0;
        sort(nums.begin(), nums.end());
        int length = 1;
        int maxlength = 1;
        for (int i = 1; i < n; i++) {
            // duplicate remove it dude
            if (nums[i] == nums[i - 1])
                continue;
            // counting
            if (nums[i] == nums[i - 1] + 1) {
                length++;

            } else {
                // reseting the value dude
                maxlength = max(maxlength, length);
                length = 1;
            }
        }
        maxlength = max(maxlength, length);
        return maxlength;
    }
};