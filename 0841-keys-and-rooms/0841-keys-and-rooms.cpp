class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        // since This is the concept of bfs 
        // size() of visited == room.size() than true other wise false 
        unordered_set<int> visited ;
        int first_room = 0 ;
        visited.insert(first_room);
  
        queue<int> q ;
        q.push(0);  // make a queue for level order traversal 
        while(!q.empty()){
            auto curr = q.front();
            q.pop();
            for(auto neighbour : rooms[curr]){
                if(visited.count(neighbour)==0){
                        q.push(neighbour);
                        visited.insert(neighbour);
                }
            }
        }

        return visited.size() == rooms.size()  ;
    }
};