class Solution {
public:
    int passThePillow(int n, int time) {
        int count=0;
        int i=1;
        int turn=0;
        first:
        for(;;) {
            if(count==time) {
                turn = i;
                goto end;
            }

            if(i==n) {
                goto second;
            }

            i++;
            count++;
        }
        
        second:
        for(;;) {
            if(count==time) {
                turn = i;
                goto end;
            }

            if(i==1) {
                goto first;
            }

            i--;
            count++;
        }

        end:
        return turn;
    }
};
