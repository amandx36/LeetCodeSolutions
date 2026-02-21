class Solution {
public:
void dfs( int node , vector<vector<int>>&adjList ,  vector<bool>&visited){
  visited[node]  = true ;
  for(auto neighbour  : adjList[node]){
    // now visited than visit 
    if(!visited[neighbour]){
      dfs(neighbour,adjList,visited);
    }
  }
}
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>>adjList(n);
        for(int i  = 0 ; i < edges.size();i++){
          int first =  edges[i][0];
          int second  =  edges[i][1];
          adjList[first].push_back(second);
          adjList[second].push_back(first);


        }

        // now make the bfs call 
        vector<bool>visited(n);
        dfs(source,adjList,visited);
        if(visited[destination]==true){
          return true ;
        }
        return false ;
    }
};