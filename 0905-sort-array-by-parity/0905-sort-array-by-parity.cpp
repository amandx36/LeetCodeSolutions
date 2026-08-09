class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // vector<int>res;
        // int n = nums.size();
        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i]%2==0) res.push_back(nums[i]);
        // }
        // for(int i = 0 ; i < n ; i++){
        //     if(nums[i]%2!=0) res.push_back(nums[i]);
        // }
        // return res;
        
// TC (n/2) sc 1 

        int i = 0;
        int j = nums.size() - 1;

        while (i < j) {

            if (nums[i] % 2 == 0) {
                i++;
            }
            else if (nums[j] % 2 != 0) {
                j--;
            }
            else {
                swap(nums[i], nums[j]);
                i++;
                j--;
            }
        }

        return nums;
    }
};