class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxCount = 0;
        int Count = 0;

        //   TC   :)         (n)
        int n = nums.size();
        for (int i = 0; i < n; i++) {

            if (nums[i] == 1)
                Count++;
            if (Count >= maxCount) {
                maxCount = Count;
            }

            if (nums[i] != 1) {
                Count = 0;
            }
        }
        return maxCount;
    }
};