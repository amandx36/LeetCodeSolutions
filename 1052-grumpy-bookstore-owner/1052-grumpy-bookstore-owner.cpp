class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int k = minutes ;
        int preLoss = 0 ;
        int n  = customers.size();
        vector<int>& arr = customers;
        for(int i = 0 ; i < k ; i ++){
            if(grumpy[i]==1) preLoss += arr[i];
        }
        int maxIndx =  0 ;
      
        int  maxLoss = preLoss ;
        int i = 1 ;
        int  j = k ;
        while (j<n){
            int currLoss = preLoss;
            if(grumpy[j]==1) currLoss += arr[j] ;
            if(grumpy[i-1]==1) currLoss -= arr[i-1];

            // now max loss in satisfaction than 
            if(maxLoss<currLoss){
                maxLoss = currLoss;
                maxIndx  =  i ;
            }
            preLoss =  currLoss ;
            i++;
            j++;


        }

        // now fill with zero 
        for(int  i  = maxIndx ;  i < maxIndx + k ; i++){
            grumpy[i] =   0 ; 

        }
        int sum = 0 ;
        // Now calculate the maxSattifaction 
        for(int i = 0 ; i < n ; i++){
            if(grumpy[i]==0) sum+=arr[i] ;

        }
        return sum ;

    }
};