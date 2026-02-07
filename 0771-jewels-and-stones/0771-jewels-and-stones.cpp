class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char>bag;
        int count = 0 ; 

        // insert jewels into set
        for(int i  = 0 ; i < jewels.size();i++){
            bag.insert(jewels[i]);
        }

        // now iterate to stone dude 
        for(int i  = 0 ; i < stones.size();i++){
            // check present 
            if(bag.find(stones[i])!=bag.end()){
                count++;
            }
        }
        return count;
        
    }
};