class Solution {
public:
    bool check(vector<int>& nums) {
        int count = 0 ;
        for(int i = 0 ; i < nums.size()-1 ;i++){
            if(nums[i]>nums[i+1]) count++ ;
            // agar array rotate hua hai to sirf 1 barr  nums[i]>nums[i+1] ye vllid hogi nahi to unsortedd array hogi 
           
        }
        // Circular check: last element agar first element se bada hai toh break count badhao kyu ke ek barr bhi rotate ko sakta hai 
        if(nums[0]<nums[nums.size()-1]) count++;
         if(count>=2) return false;
        return true ;
        
    }
};