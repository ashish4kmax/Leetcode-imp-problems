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
