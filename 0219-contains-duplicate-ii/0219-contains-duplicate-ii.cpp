class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            if (mp.find(nums[i]) != mp.end()) {
                int index = mp.find(nums[i])->second;

                int distance = i - index;
                if (distance <= k)
                    return true;
            }
            // number -> index ;
            mp[nums[i]] = i;
        }
        return false;
    }
};