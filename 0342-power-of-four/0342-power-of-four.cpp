class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0 ) return false ;
        if((n&n-1)!=0) return false  ;
        int post = 0 ;
        while(n>1){
            post++;
            n = n >>1;
        }
    if(post%2==0) return true ;
    return false ;
       
        
        
    }
};