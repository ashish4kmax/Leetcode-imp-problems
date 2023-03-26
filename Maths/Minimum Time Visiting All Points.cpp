class Solution {
public:
    int minTimeToVisitAllPoints(vector<vector<int>>& points) {
        int count=0;
        for(int i=1;i<points.size();i++){
            // As explained in the problem we can travel diagonally till x1==x2 and y1==y2 so we check whats the maximum change we can get from going to x1 to x2 and y1 to y2 cuz the maximum change is the minimun time required to reach that point.
            int x=points[i][0]-points[i-1][0];
            int y=points[i][1]-points[i-1][1];

            count=count + max(abs(x),abs(y));
        }
        return count;
    }
};
