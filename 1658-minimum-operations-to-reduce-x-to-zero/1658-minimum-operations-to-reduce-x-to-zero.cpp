class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        long long sum = 0;
        for (auto ele : nums) {
            sum += ele;
        }
          long long target = sum - x;

        if (target < 0)
            return -1;

        if (target == 0)
            return nums.size();


        int add = 0;
        int maxlen = -1;
        int right = 0 ;
        int left = 0 ;
        for (right = 0; right < nums.size(); right++) {
            add += nums[right];
            while (left <= right and add > target) {
                add -= nums[left];
                left++;
            }
            if (add == target) {
                maxlen = max(maxlen, right - left + 1);
            }
        }
            if(maxlen==-1)return -1;
            return nums.size() - maxlen;
        }
    };