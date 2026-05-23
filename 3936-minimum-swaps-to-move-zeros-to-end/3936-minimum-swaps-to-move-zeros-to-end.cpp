class Solution {
public:
    int minimumSwaps(vector<int>& nums) {

        int n = nums.size();

        int zeros = 0;

        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) zeros++;
        }

        int minMove = 0;

        for (int i = n - 1; i >= n - zeros; i--) {
           if(nums[i]==0) continue;
            minMove++;
        }

        return minMove;
    }
};