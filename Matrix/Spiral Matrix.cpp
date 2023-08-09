class Solution {
public:
    int l=0,r=0,t=0,d=0,total=0;
    int map[110][110];
    void left(vector<int>& res, vector<vector<int>>& matrix, int n, int m) {
        int i = t;
        if(t>0) {
            i=t-1;
        }
        for(;i<m-d;i++) {
            if(map[d][i]>0) {
                res.push_back(matrix[d][i]);
                map[d][i]--;
                total = total+1;
            }
        }
        l = l+1;
    }

    void down(vector<int>& res, vector<vector<int>>& matrix,int n, int m) {
        for(int i=0;i<n-r;i++) {
            if(map[i][m-1-r]>0) {
                res.push_back(matrix[i][m-1-r]);
                map[i][m-1-r]--;
                total = total+1;
            }
        }
        d = d+1;
    }

    void right(vector<int>& res, vector<vector<int>>& matrix,int n, int m) {
        for(int i=m-1-t;i>=t;i--) {
            if(map[n-1-t][i]>0) {
                res.push_back(matrix[n-1-t][i]);
                map[n-1-t][i]--;
                total = total+1;
            }
        }
        r = r+1;
    }

    void top(vector<int>& res, vector<vector<int>>& matrix, int n, int m) {
        for(int i=n-l;i>=l;i--) {
            if(map[i][l-1]>0) {
                res.push_back(matrix[i][l-1]);
                map[i][l-1]--;
                total = total+1;
            }
        }
        t = t+1;
    }

    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>res;
        int n = matrix.size();
        int m = matrix[0].size();
        
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                map[i][j]++;
            }
        }
        for(;;) {
            if(total>=(m*n)) break;
            left(res,matrix,n,m);
            down(res,matrix,n,m);
            right(res,matrix,n,m);
            top(res,matrix,n,m);
        }

        return res;
    }
};
        
