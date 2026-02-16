class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    //     vector<int>answer;
    //     int n =  digits.size();
    //     long long  number  = 0 ;
    //     for(int i  = 0 ;  i < n ; i++){
    //         number  =  number*10 + digits[i];

    //     }
    //     number +=1;
    //     while(number>0){
    //         int ld  =  number%10;
    //         answer.push_back(ld);
    //         number = number/10;
    //     }
        
    //      reverse(answer.begin(),answer.end());
    //    return answer;

    // method 02 using from reverse !!
    int n  = digits.size()-1;
    for(int i  = 0 ; i<digits.size();i++){
        if(digits[n-i]<9){
            digits[n-i]+=1;
            return digits;
        }
        else{
            digits[n-i]  = 0 ;

        }
       
        
    }
     digits.insert(digits.begin(), 1);
    return digits;
    }
};