class Solution {
public:

    bool isExist(string subStr , string word){

 return word.find(subStr) != string::npos;

    }
    int numOfStrings(vector<string>& patterns, string word) {
        int count = 0 ;
        int n = patterns.size();
        for(int i = 0 ; i < n ; i++){
            if(isExist(patterns[i],word)) count++;
        }
        return count ;
    }
};