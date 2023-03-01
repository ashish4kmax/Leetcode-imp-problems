class Solution {
public:
    // The pattern for this is as follows 0,1,2,4,6,9,12,16,20......... for respective values of n = 1,2,3,4,5,6,7,8,9..........
    int minOperations(int n) {
        int incr=1;
        int count=0;
        int value=0;
        // According to the pattern we follow these rules and make the loop run and we see that there is an increment in value like 0,1,2,4 2 to 4 increment is 
        // from 1 to 2.
        for(int i=1;i<n;i++) {
            // So we made a count variable to increment the value so that incrementer increases by 1 for every 2 values.
            if(count==2) {
                incr++;
                count=0;
            }
            value+=incr;
            count++;
        }


        return value;
    }
};
