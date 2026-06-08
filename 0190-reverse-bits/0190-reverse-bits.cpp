class Solution {
public:
    int reverseBits(int n) {
        int ans = 0 ;
        
        for(int i = 0 ; i < 32 ; i++){
            int lastBit = 0 ;
            ans = (ans<<1) ;  // shift left  
               lastBit =  (n&1) ; // take out the last bit 
               ans = (ans | lastBit) ;
               n = n>>1;  // right shift 
        }
        return ans ;

        
    }
};