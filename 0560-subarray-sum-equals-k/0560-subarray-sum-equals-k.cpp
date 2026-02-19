class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
      // Method 01 ;     0(n cube )
      // int count= 0 ;
      // for(int i   = 0 ; i < nums.size(); i++){
      //   for(int  j = i  ; j <nums.size();j++){
      //     int sum  = 0 ;  
      //     for(int  k = i ; k <= j ;k++){
      //       sum+=nums[k];
      //     }
      //     if(sum==k){
      //       count++;
      //     }
      //   }

      // }
      // return count;

      // Method 02   0 (n square )
      int count  = 0 ; 
      for(int  i  = 0 ; i < nums.size();i++){
        int sum = 0  ; 
        for(int j  = i ;  j < nums.size() ;  j++  ){
          sum+=nums[j];
          if(sum==k){
            count++;
          
          }
        }
      }
      return count ;
        
    }
};