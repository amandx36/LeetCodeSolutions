class Solution {
public:
    int po(int n , long long  prd ){
        if(n==prd) return true  ;
        if(n<prd) return false ;
        prd = 2*prd;
        return po(n,prd);

    }
    bool isPowerOfTwo(int n) {
        bool ans = po(n,1);
        return ans ;
    }
};