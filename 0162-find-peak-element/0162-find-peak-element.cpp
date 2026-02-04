class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int low = 0 ;
        int high = nums.size() -  1 ;
        int mid  ;
        while(low<high){
            mid =  low+(high-low)/2;
            // this is uphill and solution exist in right 
            if(nums[mid]<nums[mid+1]) 
                low = mid + 1 ;
            else {
                // down hill solution exist on left 
                high = mid ;
            }
        }
        return low ;
    }
};