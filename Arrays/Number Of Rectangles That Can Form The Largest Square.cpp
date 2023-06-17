class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rect) {
        vector<int>squares;
        int n = rect.size();
        for(int i=0;i<n;i++) {
            squares.push_back( min(rect[i][0],rect[i][1]) );
        }

        int max = 0;
        for(int i=0;i<squares.size();i++) {
            if(squares[i]>squares[max]) max = i;
        }

        int count=0;
        for(int i=0;i<squares.size();i++) {
            if(squares[i]==squares[max]) count++;
        }

        return count;
    }
};
