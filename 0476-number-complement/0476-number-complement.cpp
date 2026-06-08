class Solution {
public:
    int findComplement(int num) {
        // find the length 
        int  count = 0 ;
        int temp = num ;
        while(temp!=0){
            count++ ;
            temp = (temp >>1);
        }
        int mask =  0 ;
        for(int i = 0 ; i < count ; i++){
            mask = (mask<<1);
            mask =  mask | 1 ;
            
        }
        return mask ^ num;
    }
};