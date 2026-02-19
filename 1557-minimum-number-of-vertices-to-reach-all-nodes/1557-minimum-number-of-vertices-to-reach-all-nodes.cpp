class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        // incoming edges is 0 than koi kissi ke through a he nahi skta so 

        // making adjacency list 
  vector<vector<int>>adjacencyList(n);
        for(int i = 0 ; i < edges.size();i++){
          int first  = edges[i][0];
          int second =  edges[i][1];
          adjacencyList[first].push_back(second);

        }

        // now making a incoming vertices 
        vector<int>incoming(n);
        for(int i  = 0 ; i < adjacencyList.size();i++){
          for(auto ele:adjacencyList[i]){
            incoming[ele]++;
          }
        }

        // now fining the minimum node dude 
        vector<int>answer;
        for(int i  = 0 ; i < incoming.size();i++){
          if(incoming[i]==0)
          answer.push_back(i);
        }
        return answer ;
    }
};