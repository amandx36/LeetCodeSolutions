class Solution {
public:
    int reverse (int digit){
        int r = 0 ;
        while (digit>0){
            r = r * 10;
            r = r + (digit%10);
            digit = digit  / 10 ;

        }
        return r ;
    }
    int countDistinctIntegers(vector<int>& nums) {

            int n  = nums.size();
            for(int i =0 ;  i < n ; i++){
                int rev = reverse(nums[i]);
                nums.push_back(rev);
            }

            // now put in the unordered set for elementing the duplicated data 
            unordered_set<int> s ;
            for (int i =0 ;  i < nums.size();i++){
                s.insert(nums[i]);
            }
            return s.size();
    }
};