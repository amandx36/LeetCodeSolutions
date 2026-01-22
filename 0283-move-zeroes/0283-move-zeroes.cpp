class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // Method 01   TC 0(N)  and SC (N)


        // vector<int> niggaArray;
        // int n = nums.size();
        // for (int i = 0; i < n; i++) {
        //     if (nums[i] != 0) {
        //         niggaArray.push_back(nums[i]);
        //     }
        // }
        // int k = niggaArray.size();
        // for (int i = 0; i < k; i++) {
        //     nums[i] = niggaArray[i];
        // }
        // for (int i = k; i < n; i++) {
        //     nums[i] = 0;
        // }


        // Method 02 !!   TC 0(n) and SC  (1)

        int idx = 0 ;
        int n = nums.size();
        for(int i = 0  ; i < n ; i ++){
            if(nums[i]!=0){
                nums[idx] =  nums[i];
                idx++;
                
            }
        }
        // now fill the remaning array 
        for(int i = idx ; i < n ; i++){
            nums[i]=0;
        }

        

    }
};