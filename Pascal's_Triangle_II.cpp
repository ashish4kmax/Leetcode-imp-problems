class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<vector<int>>pascal;
        if(rowIndex==0) {
            pascal = {{1}};
            return pascal[0];
        }
        else if(rowIndex==1) {
            pascal = {{1},{1,1}};
            return pascal[1];
        }
        else {
            pascal = {{1},{1,1}};
            vector<int>temp{1,1};
            vector<int>res;
            for(int i=2;i<rowIndex+1;i++) {
                res.push_back(1);
                for(int j=0;j<i-1;j++) {
                    res.push_back(temp[j]+temp[j+1]);
                }
                res.push_back(1);
                temp=res;
                pascal.push_back(res);
                res.clear();
            }

            return pascal[rowIndex];
        }
    }
};
