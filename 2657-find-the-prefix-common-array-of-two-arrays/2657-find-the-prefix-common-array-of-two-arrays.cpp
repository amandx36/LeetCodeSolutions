class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int p =  0 , q = 0 , answer = 0  ;
        vector<int>result ;
        int n = A.size();
        vector<int>freq(n+1, 0);
        for(int i = 0  ; i < n ;i++){
               // increase the count of A 
               freq[A[i]]++;
               // check is the 2 times occur in the freq array 
               if (freq[A[i]]==2) answer++;
                // increase the count of B 
                freq[B[i]]++;
                if(freq[B[i]]==2)answer++;

                


                result.push_back(answer);


        }
        return result ;
    }
};