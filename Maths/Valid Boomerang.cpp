class Solution {
public:
    bool isBoomerang(vector<vector<int>>& points) {
        //3 points form a boomerang if and only if the triangle formed from them has non-zero area.
        float a = sqrt(  pow((points[0][0]-points[1][0]),2) + pow((points[0][1]-points[1][1]),2) );
        float b = sqrt(  pow((points[1][0]-points[2][0]),2) + pow((points[1][1]-points[2][1]),2) ); 
        float c = sqrt(  pow((points[2][0]-points[0][0]),2) + pow((points[2][1]-points[0][1]),2) );
        float s = (a+b+c)/2;
        float area = sqrt(s*(s-a)*(s-b)*(s-c));
        if(area != 0 ) {
            return true;
        }
        else {
            return false;
        }
    }
};
