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
            unordered_set<int> s ;
            for(int i =0 ;  i < n ; i++){
                int rev = reverse(nums[i]);
                  s.insert(nums[i]);
                  s.insert(rev);
                
            }

        
            return s.size();
    }
};