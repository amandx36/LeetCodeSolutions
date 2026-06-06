class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        vector<int> prefixDistinct;
        unordered_set<int> seen;

        int n = nums.size();
        int distinctCount = 0;

        
        for (int i = 0; i < n; i++) {
            if (seen.find(nums[i]) == seen.end())
                distinctCount++;

            prefixDistinct.push_back(distinctCount);
            seen.insert(nums[i]);
        }

        
        seen.clear();
        distinctCount = 0;

        vector<int> suffixDistinct;
        suffixDistinct.push_back(0);

        for (int i = n - 1; i > 0; i--) {
            if (seen.find(nums[i]) == seen.end())
                distinctCount++;

            suffixDistinct.push_back(distinctCount);
            seen.insert(nums[i]);
        }

        reverse(suffixDistinct.begin(), suffixDistinct.end());

       
        vector<int> answer;

        for (int i = 0; i < n; i++) {
            answer.push_back(prefixDistinct[i] - suffixDistinct[i]);
        }

        return answer;
    }
};