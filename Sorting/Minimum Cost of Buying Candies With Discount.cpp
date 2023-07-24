class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(),cost.end());

        int costs = 0;
        int n = cost.size();
        int c = 0;
        for(int i=n-1;i>-1;i--) {
            if(c==2) {
                c=0;
                continue;
            }
            costs+=cost[i];
            c++;
        }

        return costs; 
    }
};
