class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        //  method 01   tc n sc n 

        // int n = nums.size();
        // vector<int>positive;
        // vector<int>negative;
        // for(int i = 0 ;  i < n ; i++){
        //     if(nums[i]>0) positive.push_back(nums[i]);
        //     else  negative.push_back(nums[i]);
        // }
        // int posIndex  = 0 , negIndex=0 ;
        // for(int i = 0 ; i < n ; i++){
        //     if(i%2==0) {
        //         nums[i]= positive[posIndex];
        //         posIndex++;
        //     }
        //     else {
        //         nums[i]=negative[negIndex]; 
        //     negIndex++;
        //     }
        // }
        // return nums;

        //  method 02   tc n and sc 1 
        int posInd =0 ,negInd = 1 ;
        int n = nums.size();
        vector<int>ans(n);
        for(int i = 0 ;  i < n ; i++){
            if(nums[i]>0){
                ans[posInd] =  nums[i];
                posInd=posInd+2;

            }
            else{
                ans[negInd] = nums[i];
                negInd=negInd+2;
            }

        } 
        return ans ;
    }
};