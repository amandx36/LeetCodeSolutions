class MyHashMap {
public:
    vector<pair<int,int>>hm;
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        // is key already exist or not 
        for (auto &ele : hm){
            if(ele.first==key){
                ele.second=value;
                return;
            }
        }
        hm.push_back({key,value});
        
    }
    
    int get(int key) {
        // if exist 
        for(auto ele : hm){
            if(ele.first==key){
                return ele.second;
            }
        }
        return -1 ;
    }
    
    void remove(int key) {
            // using the iterator 
            for(auto it=hm.begin();it != hm.end();++it){
                if(it->first==key){
                    hm.erase(it);
                    return ;
                }
            }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */