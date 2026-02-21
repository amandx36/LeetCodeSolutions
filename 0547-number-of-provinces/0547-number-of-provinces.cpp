class Solution {
public:


  void dfs(int node , vector<vector<int>>&adjList,vector<bool>&visited){
    visited[node]=true;
    for(auto neighbour:adjList[node]){
      if(!visited[neighbour]){
        // again call the dfs dude 
        dfs(neighbour,adjList,visited);
      }
    }
  }
    int findCircleNum(vector<vector<int>>& isConnected) {

      // converting the adjacency matrix into adjacency list 
      int n = isConnected.size();
      vector<vector<int>>adjList(n);
      for(int i  = 0 ; i < isConnected.size();i++){
        for(int   j  = 0 ; j <  isConnected.size();j++){
          if(i==j)continue;
         if(isConnected[i][j]==1){
          adjList[i].push_back(j);
         }

        }
      }
      int counter = 0 ;

      // now its turn into perfoming the dfs dude 
       vector<bool>visited(isConnected.size(),false);
      for(int i = 0 ;  i < isConnected.size();i++){
       
        if(!visited[i]){
          // call the dfs dude 
          dfs(i,adjList,visited);
          counter++;

        }
      }
      return counter ;
        
    }
};