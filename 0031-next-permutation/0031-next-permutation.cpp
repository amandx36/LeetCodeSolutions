class Solution {
public:
    void reverser(int i , int j ,vector<int>&nums){
        j = j - 1 ;
        int temp = -999;
        while(i<j){
            temp =  nums[i];
            nums[i]=nums[j];
            nums[j] = temp ;
            i++;
            j--;
            
        }
    } 
    void nextPermutation(vector<int>& nums) {
        

        int n = nums.size();
        int i  = n - 2 ;
        // finding the pivot where smaller < larger 

        // while (true) than work other wise did not work dude !! 

        while(i>=0 and nums[i]>= nums[i+1]){
            i--;
        }
        // if pivot exist than do this dude 
        if(i>=0){
            // finding the elment which is just greater than the pivot dude 
            int j = n - 1 ;
            while(nums[i]>=nums[j] and j >=0){
                j--;
            }
            // fond than swap it dude 
            int element = nums[j];
            nums[j]=nums[i];
            nums[i] =  element ;
            // swap the last part ;
            reverser(i+1,n,nums);
            return ;
        }
        // if nothing greater found than reverse the whole part dude 
        reverser(0,n,nums);
        return ;
    }
};