class Solution {
public:
    int reverseBits(int n) {
        int ans = 0 ;
        
        for(int i = 0 ; i < 32 ; i++){
            int lastBit = 0 ;
            ans = (ans<<1) ;
               lastBit =  (n&1) ;
               ans = (ans | lastBit) ;
               n = n>>1;
        }
        return ans ;

        
    }
};