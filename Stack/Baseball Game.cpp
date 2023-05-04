class Solution {
public:
    int calPoints(vector<string>& ops) {
        // We will use stack data structure to solve the following problem as here we have to store and access elemts of the top of array that is top of stack and add it.
        vector<int>stack;
        // This value is used to convert the given string value to integer value.
        int value=0;
        int sums=0;
        // Then we use the +,C,D,x as required.
        for(int i=0;i<ops.size();i++) {
            if(isdigit(ops[i].at(0))) {
                value = stoi(ops[i]);
            }
            else if(ops[i].at(0)=='-') {
                value = stoi(ops[i]);
            }

            if(ops[i]=="C") {
                sums-=stack[stack.size()-1];
                stack.pop_back();
            }
            else if(ops[i]=="D") {
                stack.push_back(stack[stack.size()-1]*2);
                sums+=stack[stack.size()-1];
            }
            else if(ops[i]=="+") {
                stack.push_back(stack[stack.size()-1]+stack[stack.size()-2]);
                sums+=stack[stack.size()-1];
            }
            else {
                stack.push_back(value);
                sums+=value;
            }
        }

        // sums will return the sum of all elements left in the stack.
        return sums;
    }
};
