class Solution {
public:
    int lengthFinder(int data){
        int length =  0  ;
        while(data > 0){
            data = data / 10 ;
             length ++ ;

        }
        return length ;
    }

    int longestCommonPrefix(vector<int>& arr1, vector<int>& arr2) {
        int maxLength = 0 ;

    unordered_set<int> set;

    for (int i = 0 ; i < arr1.size();i++){
        int  value = arr1[i];
        while(value>0){
            set.insert(value);
            value = value / 10 ;
        }
    }

    for (int i = 0 ; i < arr2.size();i++){
        int  value = arr2[i];
        int currentLen = 0;
        while(value>0){
            if(set.find(value) != set.end()){
                currentLen = lengthFinder(value);
                maxLength = max(currentLen,maxLength);
            }
            value  = value / 10 ;
        }


        
    }

    return maxLength ;

    }
};