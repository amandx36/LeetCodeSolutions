class Solution {
public:

// TC     ()
  int digiSquare(int digit){
    int value = 0; 
    while(digit>0){
      int number = digit%10;
      digit = digit/10;
      value = value + number*number;

    }
    return value ;
  }
    bool isHappy(int n) {
      unordered_set<int>bag;
      while(true){
         
        int data2  =  digiSquare(n);
         if(data2==1) return true ;
        n = data2;
        if(bag.find(data2)!=bag.end()) return false ;
      
        bag.insert(data2);
      }
      return true ;
        
    }
};