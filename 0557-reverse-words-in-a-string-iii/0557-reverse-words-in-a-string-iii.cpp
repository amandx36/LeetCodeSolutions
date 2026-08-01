class Solution {
public:
    void reverse (string& s , int i , int j ){
        while (i <j){
            swap(s[i],s[j]);
            i++;
            j--;
        }
    }
    string reverseWords(string s) {
        int n = s.size();
        int i = 0 ;
        int j = 0 ;
        while(j<n){
            if(s[j]!=' '){
                j++;
            }
            if (s[j]==' ' || s[j]=='\0'){
                reverse(s,i,j-1);
                i = j + 1 ;
                j++;
            }
        }
        return s ;
    }
};