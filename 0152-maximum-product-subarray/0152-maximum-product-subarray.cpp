class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maxproduct = INT_MIN;
        int sufix = 1;
        int prefix = 1;

        for (int i = 0; i < n; i++) {
            if (prefix == 0)
                prefix = 1;
            if (sufix == 0)
                sufix = 1;
            // calculate prefix array 
            prefix = prefix * nums[i];
            // calculate suffix array 
            sufix = sufix * nums[n-i-1];
            maxproduct = max ( maxproduct , max (prefix, sufix));
        }
        return maxproduct;
    }
};