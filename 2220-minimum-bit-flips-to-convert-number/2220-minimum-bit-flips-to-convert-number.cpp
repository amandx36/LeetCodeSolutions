class Solution {
public:
    int minBitFlips(int start, int goal) {
        int data = start ^ goal ;
        int count = 0 ;
        // now count the number of set bit dude 
        while(data !=0){
            
            data = (data & data-1);
            count++;
        }
        return count ;
    }
};