class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {

        vector<int> suffDiff;
        unordered_set<int> st;
        int n = nums.size();
        int nigga = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (st.find(nums[i]) == st.end())
                nigga++;
            suffDiff.push_back(nigga);
            st.insert(nums[i]);
        }

        // now for the suffix difference
        st.clear();

        // reverse
        nigga = 0;
        vector<int> preDiff;
        preDiff.push_back(0);
        for (int i = n - 1; i > 0; i--) {
            if (st.find(nums[i]) == st.end())
                nigga++;
            preDiff.push_back(nigga);
            st.insert(nums[i]);
        }
        reverse(preDiff.begin(), preDiff.end());

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            int result = suffDiff[i] - preDiff[i];
            ans.push_back(result);
        }

        return ans;
    }
};