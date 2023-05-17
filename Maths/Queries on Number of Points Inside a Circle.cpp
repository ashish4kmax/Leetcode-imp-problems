class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> res;
        for(auto &q:queries) {
            int cy=q[1],cx=q[0],rr=q[2]*q[2],count=0;
            for(auto &p:points) {
                int dx = p[0]-cx,dy = p[1]-cy;
                if(dx*dx + dy*dy <=rr) count++;
            }
            res.push_back(count);
        }
        
        return res;
    }
};
