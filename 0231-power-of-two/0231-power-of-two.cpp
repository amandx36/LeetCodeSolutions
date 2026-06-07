class Solution {
public:
    bool isPowerOfTwo(long long  n) {
        if(n==0 || n ==  1) return n ;
        if((n & ((n-1)))==0) return true ;
        return false ;
        
    }
};