class Solution {
public:
    // for finding the element which occurs first dude 
    int findFirstOcuu(vector<int>& nums, int target){
        int low = 0 ;
        int high = nums.size()-1;
        int mid = 1 ;
        int ans = -1 ;
        while (low<=high){
            mid = low + (high-low)/2;
            if(nums[mid]==target) {
                ans = mid ;
                high = mid -1 ;
            }
            else if ( nums[mid]>target){
                high = mid -1 ;
            }
            else low = mid + 1 ;
        }
        return ans ;
    }

    // for finding the occurs last dude 
     int findLastOcuu(vector<int>& nums, int target){
        int low = 0 ;
        int high = nums.size()-1;
        int mid = 1 ;
        int ans = -1 ;
        while (low<=high){
            mid = low + (high-low)/2;
            if(nums[mid]==target) {
                ans = mid ;
               low = mid + 1 ;
            }
            else if ( nums[mid]>target){
                high = mid -1 ;
            }
            else low = mid + 1 ;
        }
        return ans ;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
         vector<int>ans = {findFirstOcuu(nums,target),findLastOcuu(nums,target)};
         return ans ;
        
    }
};