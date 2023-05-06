class Solution {
public:
    int findTheWinner(int n, int k) {
        // Very simple approch it has we need to make a vector/cricular-vector in which we will have values from 1 to n.
        vector<int>num;
        for(int i=1;i<=n;i++) {
            num.push_back(i);
        }
        
        int count=1;
        int i=0;

        // After inserting values into the circular vector we loop through it till only one value left that is the winner.
        while(num.size()!=1) {
            if(count==k) {
                // We delete or eliminate the friend which has count = k and make count = 1 (reset counter).
                num.erase(num.begin()+i);
                count=1;
            }
            else {
                count++;
                // This is the concept of circular arrays/vector/list etc.
                i=(i+1)%(num.size());
            }
        }

        return num[0]; 
    }
};
