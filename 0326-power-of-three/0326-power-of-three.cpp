class Solution {
public:
    bool isp3(int n , long long  ml ){
        if(n==ml)return true ;
        if(n<ml) return false ;
        ml = 3 * ml;
        return isp3(n,ml);
    }
    bool isPowerOfThree(int n) {
        bool ans = isp3(n,1);
        return ans ;
    }
};