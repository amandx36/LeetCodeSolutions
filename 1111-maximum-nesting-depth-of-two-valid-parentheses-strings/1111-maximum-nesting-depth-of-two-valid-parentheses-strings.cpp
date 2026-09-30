class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.length();
        vector<int>result(n);
        int depth = 0 ;
        for(int i = 0  ; i < n ; i++){
            if(seq[i]=='('){
                depth++;
                // if odd belongs to grop 1 and in even belongs to grop 2 
                if(depth % 2 ==0){
                    result[i]=0;
                }
                else result[i]=1;
            }
            if(seq[i]==')'){
                if(depth%2==0) result[i]=0;
                else result[i]=1;
                depth--;
            }
        }
        return result ;
    }
};