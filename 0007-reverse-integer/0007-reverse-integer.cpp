class Solution {
public:
    int reverse(long long  x) {
       bool isNegative = false ;
       long long  num = x  ; 
       if (x < 0 ){
        isNegative = true ;
         num = -num ;

       }
        
        long   long lastDigit = 0 ;
         long long  reverse  = 0 ; 

        while(num>0){
            lastDigit  =  num % 10 ; 
             reverse = reverse * 10 + lastDigit ;
            num = num / 10 ;
        }
        // checking for condition overflow dude 
        if (reverse> INT_MAX || reverse < INT_MIN) return 0 ;

       return isNegative  ?  -reverse :  reverse ;

        
    }
};