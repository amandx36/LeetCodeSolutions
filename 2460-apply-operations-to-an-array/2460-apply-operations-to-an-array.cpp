class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int i = 0 ;
        int j = 1 ;
        int n = nums.size();
        while(i < n and j < n  ){
            if(nums[i]==nums[j]){
                nums[i] *= 2;
                nums[j] = 0 ;
                
            }
            i++;
            j++;
        }
         // now throw the zeros to the end 
    int index = 0 ;
    for(int i = 0 ; i <  n ; i++){
        if(nums[i]!=0){
           swap( nums[index] ,nums[i]);
            index++;
        }
    }
    return nums;
    }
   
};