class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    // // method 01 optimized 
    //     int left  = 0 ;
    //     int maxlength = 0 ;
    //     unordered_map<char,int> mp ;
    //     for(int right  = 0 ; right< s.size();right++ ){
    //         // extract the character from string 
    //         int character = s[right];

    //         // check if exist int the map or not dude 
    //         if(mp.find(character)!=mp.end()){
    //             // means exist in map 
    //             // find the last index and move to one index 
    //             int lastIndex =  mp[character];
    //             if(lastIndex + 1 > left){
    //                 left  =  lastIndex + 1 ;

                    
    //             }
    //         }

    //         // store the index and character into map 
    //         mp[character]  = right ;
    //         // calculate the lenght 
    //         int currentLength =  right - left + 1 ;
    //         maxlength =  max(maxlength,currentLength);

    //     }
    //     return maxlength;
        
        // method 02 General template 
        int right = 0 ;
        int ans = 0 ;
        int left = 0 ;
        unordered_map<char,int>window;
        for(int  right = 0 ; right < s.length();right++){
            // add in window 
            window[s[right]]++;
            
            // which make  the character invalid 
            while(window[s[right]]>1){
                window[s[left]]--;
                left++;

            }
            // calculate the max answer 
            ans = max(ans,right-left+1);
        }
        return ans ;
    }
};