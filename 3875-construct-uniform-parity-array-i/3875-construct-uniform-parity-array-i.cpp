class Solution {
public:
    bool uniformArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans;
    for (int i = 0; i < n; i++) {
        bool flag = false;
        for (int j = i; j < n; j++) {
            if ((nums[i] - nums[j]) % 2 == 0) {
            ans.push_back(nums[i] - nums[j]);
            flag = true;
        }
    }
        if (!flag) {
            ans[i] = nums[i];
        }
    }
  // check even or else
  for (auto ele : ans) {
    if (ele % 2 != 0)
      return false;
  }

return true ; 
        }
    };