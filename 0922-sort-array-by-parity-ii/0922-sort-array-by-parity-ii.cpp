class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        // make the  another copy 
        // method 01   tc n and sc n  
        // int n = nums.size();
        // vector<int>res = nums;
        // int k = 1 ;
        // int j = 0;
       
        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i]%2==0){
        //         res[j] = nums[i];
        //         j+=2;
        //     }
        //         if(nums[i]%2!=0){
        //         res[k] = nums[i];
        //         k+=2;
        //     }
        // }
        // return res ;

        // method 02 tc n  and sc 1 
       int i = 0;  // even index
        int j = 1;  // odd index
        int n = nums.size();

        while (i < n && j < n) {

            // even index must have even number
            if (nums[i] % 2 != 0) {

                // find an even number at odd index by skipping the odd number !!!
                while (j < n && nums[j] % 2 != 0) {
                    j += 2;
                }

                swap(nums[i], nums[j]);
            }

            i += 2;
        }

        return nums;
    }
};