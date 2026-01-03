/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
public:

    // make a public unordered node 
    unordered_map<Node*,Node*>mp;

    Node* cloneGraph(Node* node) {
        // if null than return it dude 
        if(node==NULL) return NULL ;
        // if node is already cloned than return it dude 
        if(mp.find(node)!=mp.end()){
            return mp[node];

        }
        
        // clone the node dude 
        Node* clone = new Node(node->val);
        // push into node 
        mp[node] =  clone;

        // now clone neighbour dude 
        for(Node* neighbour : node->neighbors){
            clone->neighbors.push_back(cloneGraph(neighbour));
        }
        return clone ;
    }
};