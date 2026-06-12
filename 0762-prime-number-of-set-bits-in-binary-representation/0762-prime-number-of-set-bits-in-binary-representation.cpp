class Solution {
public:
    int noSetBit(int n ){
        int count = 0 ;
        while(n!=0){
            count++;
            n = (n & (n -1 ));
        }
        return count ;
    }
    bool isPrime(int n ){
        if(n<=1) return false;
        if(n==2) return true ;
        // reject the even number 
        if(n%2==0) return false ;
        // odd check 
        for(int i = 3  ; i * i <=n ; i+=2){
            if(n%i==0) return false ;

        }
        return true ;
    }
    int countPrimeSetBits(int left, int right) {
        int count = 0 ;
        for(int i = left ; i <= right ; i++){
            if(isPrime(noSetBit(i))) count++;

        }
        return count ;
    }
};