class MyHashSet {
private:
	vector<bool> hashset;
public:
	MyHashSet() : hashset(1e6 + 1, false) {}
	
	void add(int key) {
		hashset[key] = true;
	}
	
	void remove(int key) {
		hashset[key] = false;
	}
	
	bool contains(int key) {
		return hashset[key];
	}
};

// Can also use set but this method is used to design a hash set it's simple if the vector has a true value then that key is present in hashset if false then key is 
// not present!! that all.
