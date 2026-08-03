class MyHashSet {
public:
    vector<int>hs;
    MyHashSet() {

    }
    
    void add(int key) {
        for(auto ele : hs){
            if (ele==key){
                return ;
            }
        }
        hs.push_back(key);
        
    }
    
    void remove(int key) {
        int n = hs.size();
        int i = 0 ;
        for( i = 0 ; i < n;i++){
            if(key==hs[i]){
                break;
            }
        }
        // is key is found 
        if(i ==n) return ;
        if(i!=n-1){
            for(int k = i ; k < n -1 ; k++)
            hs[k]=hs[k+1];
          
        }
        hs.pop_back();
    }
    
    bool contains(int key) {
        for(auto ele : hs){
            if(ele==key) return true ;

        }
        return false ;
        
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */