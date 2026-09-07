

class Solution {
public:
    bool solve(int n) {

        if (n == 1)
            return true;

        if (n <= 0 || n % 4 != 0)
            return false;

        return solve(n / 4);
    }

    bool isPowerOfFour(int n) {
    // method 01 
    //     if(n<=0 ) return false ;
    //     if((n&n-1)!=0) return false  ;
    //     int post = 0 ;
    //     while(n>1){
    //         post++;
    //         n = n >>1;
    //     }
    // if(post%2==0) return true ;
    // return false ;
    // method 02
        return solve(n);
    }
};
