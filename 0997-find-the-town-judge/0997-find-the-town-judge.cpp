class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
      // vector<int> outgoing(n+1,0);
      // vector<int>incoming(n+1,0);
      // for(int i  = 0 ; i < trust.size();i++){
      //   int first =  trust[i][0];
      //   int second  =  trust[i][1];
      //   outgoing[first]++;
      //   incoming[second]++;

      // }


      // for(int i  = 1 ;  i <= n ; i++){
      //   if(outgoing[i]== 0  and incoming[i] == n-1)
      //   return i ;
      // }
      // return -1;

      // Method 02   By graph 
      
        vector<vector<int>> adj(n + 1);
        vector<int> indegree(n + 1, 0);

        // Build graph properly
        for(int i = 0; i < trust.size(); i++){
            int u = trust[i][0];
            int v = trust[i][1];

            adj[u].push_back(v);
        }

        // Count indegree
        for(int i = 1; i <= n; i++){
            for(int neigh : adj[i]){
                indegree[neigh]++;
            }
        }

        // Find judge
        for(int i = 1; i <= n; i++){
            if(adj[i].size() == 0 && indegree[i] == n-1)
                return i;
        }

        return -1;

        
    }
};