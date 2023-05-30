class MyHashSet {
public:
    vector<bool>m;
    MyHashSet() {
        m.resize(1000001);
    }
    
    void add(int key) {
        m[key] = true;
    }
    
    void remove(int key) {
        m[key] = false;
    }
    
    bool contains(int key) {
        if(m[key]==true) {
            return true;
        }
        else {
            return false;
        }
    }
};

/* 
-------------------------------------------------------Naive solution---------------------------------------
class MyHashSet {
public:
    unordered_map<int,bool>m;
    MyHashSet() {

    }
    
    void add(int key) {
        if(m[key]!=true) {
            m[key] = true;
        }
    }
    
    void remove(int key) {
        m[key] = false;
    }
    
    bool contains(int key) {
        if(m[key]==true) {
            return true;
        }
        else {
            return false;
        }
    }
};
*/
