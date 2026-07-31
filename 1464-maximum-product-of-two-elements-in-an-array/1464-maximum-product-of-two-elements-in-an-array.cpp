class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // tc 0(nlogn)
        // sort(nums.begin(),nums.end());
        // return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
        

        // tc 0(n)
        int max = INT_MIN;
        int secMax = INT_MIN;
        for (auto ele : nums){
            if (ele >=max){
                secMax = max;
                max= ele;
                
            }
            if (secMax < ele and ele != max){
                secMax = ele;
            }

        }
        return (max-1) * (secMax-1);
    }
};