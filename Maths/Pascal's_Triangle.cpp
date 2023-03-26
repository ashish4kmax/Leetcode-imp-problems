class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascal;
        if(numRows==1) {
            pascal = {{1}};
            return pascal;
        }
        else if(numRows==2) {
            pascal = {{1},{1,1}};
            return pascal;
        }
        else {
            pascal = {{1},{1,1}};
            vector<int>temp{1,1};
            vector<int>res;
            for(int i=2;i<numRows;i++) {
                res.push_back(1);
                for(int j=0;j<i-1;j++) {
                    res.push_back(temp[j]+temp[j+1]);
                }
                res.push_back(1);
                temp=res;
                pascal.push_back(res);
                res.clear();
            }

            return pascal;
        }
    }
};
