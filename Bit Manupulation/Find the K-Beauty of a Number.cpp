class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string n = to_string(num);
        // If string length equals k that means only 1 no. is divisible cuz k=substr length and its equals num means that no. itself is to be divided.
        if(n.length()==k) {
            return 1;
        }
        string temp;
        int count=0;
        int value=0;
        int index=0;
        // At first we make one substring of length k and check if its divisible by num.
        for(int i=0;i<n.length();i++) {
            if(temp.length()==k) {
                index = i;
                break;
            }
            temp+=n.at(i);
        }

        value = stoi(temp);
        if(value!=0 && (num%value==0)) {
            count++;
        }
        temp.erase(temp.begin());
        // Then by erasing and inserting one digit we check how many such substr of num's are divisible by num.
        for(int i=index;i<n.length();i++) {
            temp.insert(temp.end(),n.at(i));
            value = stoi(temp);
            if(value!=0 && (num%value==0)) {
                count++;
            }
            temp.erase(temp.begin());
        }

        return count;
    }
};
