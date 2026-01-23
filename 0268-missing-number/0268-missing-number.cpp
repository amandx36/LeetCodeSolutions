class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // TC    nlogn  
        int n  = nums.size();
        sort(nums.begin(),nums.end());
        for (int i = 0 ; i < n ; i++){
            if(nums[i]!=i) return i ;
        }
        return n ;
        
    }
};