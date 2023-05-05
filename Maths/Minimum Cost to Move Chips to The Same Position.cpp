class Solution {
public:
    int minCostToMoveChips(vector<int>& p) {
        int count1=0;
        int count2=0;

        // If we observe the question if we scan through all the possible examples we see that position[i]+2/-2 costs = 0 and position[i]+1/-1 costs=1 so at first we merge all the odd places and even places chips as the cost for that is zero.

        for(int i=0;i<p.size();i++) {
            if(p[i]%2==0) {
                count1++;
            }
            else {
                count2++;
            }
        }

        // After that we can find the minimum of the two that is the minimum will be the minimum cost to move chips to a single position.

        return min(count1,count2);
    }
};
