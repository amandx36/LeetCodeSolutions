class Solution {
public:
    long long minimumSteps(string s) {
       int n = s.length();
       int i = 0 ;
       int j = n-1;
       long long  count=0;
       while(i<j){
         
            while(i < j and s[i]=='0' )i++;
            while(i < j and s[j]=='1')j--;
            if(i < j and s[i]=='1' and  s[j]=='0'){
                count+=(j-i);
                swap(s[i],s[j]);
                 i++;
                  j--;
            }
           
       } 
       return count;
    }
};