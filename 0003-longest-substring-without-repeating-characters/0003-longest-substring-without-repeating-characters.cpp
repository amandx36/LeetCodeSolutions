class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left  = 0 ;
        int maxlength = 0 ;
        unordered_map<char,int> mp ;
        for(int right  = 0 ; right< s.size();right++ ){
            // extract the character from string 
            int character = s[right];

            // check if exist int the map or not dude 
            if(mp.find(character)!=mp.end()){
                // means exist in map 
                // find the last index and move to one index 
                int lastIndex =  mp[character];
                if(lastIndex + 1 > left){
                    left  =  lastIndex + 1 ;

                    
                }
            }

            // store the index and character into map 
            mp[character]  = right ;
            // calculate the lenght 
            int currentLength =  right - left + 1 ;
            maxlength =  max(maxlength,currentLength);

        }
        return maxlength;
        
    }
};