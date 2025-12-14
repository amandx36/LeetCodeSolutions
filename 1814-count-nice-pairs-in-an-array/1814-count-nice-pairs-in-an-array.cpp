class Solution {
public:
        int rev (int n ){
            int r = 0  ;
            while (n>0){
                 r = r * 10 ;
                 r = r + (n% 10 );
                 n = n / 10 ;

            }
            return r ;
        }
    int countNicePairs(vector<int>& nums) {
        int n = nums.size();
        // make a global variable to do that 
        long long  count = 0  ;
        for (int i =0 ; i < n ; i++){
            nums[i]  =  nums[i] - rev(nums[i]);
        }
        // making the hashmap 
        unordered_map<int , int > m ;
        // now put in into the hashmap dude 
        for (int  i = 0 ; i < n ; i++){

            if (m.find(nums[i]) !=m.end()){
                
                // count = count %1000000007;
                count = (count + m[nums[i]]) %1000000007 ;
                m[nums[i]]++; 

            }
            else {
                m[nums[i]]++;
            }
               

        }
        return count ;

        
    }
};