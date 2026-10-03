
class Solution {
public:
  // // method 01 brute force  }
  // int isValid(string curr) {
  //   int balance = 0;
  //   int n = curr.length();
  //   for (int i = 0; i < n; i++) {
  //     if (curr[i] == '(')
  //       balance++;
  //     else
  //       balance--;
  //     if (balance < 0)
  //       return false;
  //   }
  //   return balance == 0 ? true : false;
  // }
  // void longestValidParenthesis(string s) {
  //   int longest = 0;
  //   int n = s.length();
  //   for (int i = 0; i < n; i++) {
  //     string curr = "";
  //     for (int j = i; j < n; j++) {
  //       curr += s[j];
  //     }
  //     cout << curr << endl;
  //     if (isValid(curr)) {
  //       longest = max(longest, (int)curr.length());
  //     }
  //   }
  //   cout << longest;
  // }
  // optimal one
  int longestValidParentheses(string s) {
         int open = 0, close = 0;
         int longest = 0;
         // right to left scan
         int n = s.length(); 
         for(int i = 0 ; i < n ; i++){
             if(s[i]=='(') open++;
             else close++;
             if(close>open)open = close = 0 ;
             if(close==open)longest = max(longest,2 * close);
           
         }
         
         // left to right scan 
         open = 0 ;
         close = 0 ;
         for(int i = n -1 ; i >=0 ; i--) {
             if(s[i]=='(')open++;
             else close++;
             if(open>close) open=close=0;
             if(close==open)longest = max(longest,2*close);
             
            }
         return longest;
  }

};

