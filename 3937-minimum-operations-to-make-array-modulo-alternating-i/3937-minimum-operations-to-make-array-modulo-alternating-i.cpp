class Solution {
public:
    int minOperations(vector<int>& nums, int k) {

        int ans = INT_MAX;

        for(int x = 0; x < k; x++) {

            for(int y = 0; y < k; y++) {

                if(x == y) continue;

                int cost = 0;

                for(int i = 0; i < nums.size(); i++) {

                    int target;

                    if(i % 2 == 0)
                        target = x;
                    else
                        target = y;

                    int rem = nums[i] % k;

                    int diff = abs(rem - target);

                    cost += min(diff, k - diff);
                }

                ans = min(ans, cost);
            }
        }

        return ans;
    }
};