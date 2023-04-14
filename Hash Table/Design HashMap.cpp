// This method is using direct hashmap I will try to to with a new method without hashmap in future!!
class MyHashMap {
public:
    unordered_map<int,int>m;
    MyHashMap() {
        m.clear();
    }
    
    void put(int key, int value) {
        if(m.find(key)!=m.end()) {
            m[key] = value;
        }
        else {
            m.insert({key,value});
        }
    }
    
    int get(int key) {
        if(m.find(key)!=m.end()) {
            return m[key];
        }
        else {
            return -1;
        }
    }
    
    void remove(int key) {
        m.erase(key);
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
