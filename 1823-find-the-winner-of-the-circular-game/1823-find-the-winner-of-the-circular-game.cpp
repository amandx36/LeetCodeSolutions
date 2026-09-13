
class Solution {
public:
    int getJosepthusSol(int n , int k){
        // return the index
        if(n==1) return 0 ;
       
        
        return  (getJosepthusSol(n-1,k) + k)% n ;
    }

  int findTheWinner(int n, int k) {
    // push into the queue  method 01 

    // queue<int> q;
    // for (int i = 1; i <= n; i++) {
    //   q.push(i);
    // }
    // cout << "Queue ";
    // display(q);
    // while (q.size() != 1) {
    //   display(q);
    //   for (int i = 1; i < k; i++) {
    //     q.push(q.front());
    //     q.pop();
    //   }
    //   q.pop();
    // }
    // return q.front();

    // method 02 

    int solve = getJosepthusSol(n,k);
    return  solve+ 1  ;
  }
};
