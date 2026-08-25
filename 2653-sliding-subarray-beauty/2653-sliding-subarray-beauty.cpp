class Solution {
public:
    int xthsmall(map<int, int>& mp, int x) {

        int count = 0;

        for (auto it : mp) {

            count += it.second;

            if (count >= x) {
                return it.first;
            }
        }

        return 0;
    }

    vector<int> getSubarrayBeauty(vector<int>& nums, int k, int x) {

        map<int, int> mp;
        vector<int> ans;

        int n = nums.size();

        // First window
        for (int i = 0; i < k; i++) {

            if (nums[i] < 0) {
                mp[nums[i]]++;
            }
        }

        ans.push_back(xthsmall(mp, x));

        for (int i = k; i < n; i++) {

            //    leaving
            if (nums[i - k] < 0) {
                mp[nums[i - k]]--;

                if (mp[nums[i - k]] == 0) {
                    mp.erase(nums[i - k]);
                }
            }

            // incoming
            if (nums[i] < 0) {
                mp[nums[i]]++;
            }

            ans.push_back(xthsmall(mp, x));
        }

        return ans;
    }
};