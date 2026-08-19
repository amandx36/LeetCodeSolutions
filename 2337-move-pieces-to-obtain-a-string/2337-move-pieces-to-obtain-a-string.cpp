class Solution {
public:
    bool canChange(string start, string target) {
        int n = start.length();
        int i = 0 ;
        int j = 0 ;
        while(i<n || j < n  ){
            // skip the blank 
            while(i<n and start[i]=='_') i++;
            while(j<n and target[j]=='_') j++;
            // if both or any one reach end then return on that case 
            if(i==n or j==n)return i==n and j==n;
            if(start[i]!=target[j]) return false ;

            // index constraint L on left 
            if(start[i]=='L' and i < j ) return false ;
            if(start[i]=='R' and i>j) return false ;
            i++;
            j++; 
        }
        return true ;




        return true ;
        
    }
};