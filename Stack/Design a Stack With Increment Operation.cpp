class CustomStack {
public:
    vector<int>stack;
    int ms = 0;
    CustomStack(int maxSize) {
        ms = maxSize;
    }
    
    void push(int x) {
        if(stack.size()<ms) stack.push_back(x);
    }
    
    int pop() {
        if(stack.size()==0) return -1;
        int popped = stack[stack.size()-1];
        stack.pop_back();
        return popped;
    }
    
    void increment(int k, int val) {
        int n = stack.size();
        if(k>stack.size()) {
            k = n;
        }
        for(int i=0;i<k;i++) {
            stack[i]+=val;
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */
