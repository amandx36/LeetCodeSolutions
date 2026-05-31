class Solution {
public:
    bool rotateString(string s, string goal) {
        for(int i = 0 ; i <  s.length(); i++){
            char am = s.front();
            s.erase(0,1);
            s.push_back(am);
            if(s==goal) return true ;
        }
        return false ;
        
    }
};