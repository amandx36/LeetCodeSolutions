class Solution {
public:
    char findTheDifference(string s, string t) {
      // hardcoding 
      
      // i am solving using hashmap dude 
      vector<int>hashmap(26,0);
      for(int i  = 0 ; i < s.size();i++){
        hashmap[s[i]-'a']++;
      }
      // now sabko decrease kro jo element decrease hoke -1 ho gya use return kr do 
      for(int i = 0 ; i < t.size();i++){
         hashmap[t[i]-'a']--;
        
      }

      // now return the element 
      for(int i = 0 ; i < 26;i++ ){
        if(hashmap[i]==-1) return 'a'+i;
      }
      return 0;

        
    }
};