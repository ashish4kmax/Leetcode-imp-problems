// Naive solution
class Solution {
public:
    int l=0,r=0,t=0,d=0,total=0;
    int map[410][410];
    void left(vector<int>& res, vector<vector<int>>& matrix, int n, int m) {
        int i = t;
        if(t>0) {
            i=t-1;
        }
        for(;i<m-d;i++) {
            if(map[d][i]!=1) {
                matrix[d][i] = res[total];
                map[d][i] = 1;
                total+=1;
            }
        }
        l = l+1;
    }

    void down(vector<int>& res, vector<vector<int>>& matrix,int n, int m) {
        for(int i=0;i<n-r;i++) {
            if(map[i][m-1-r]!=1) {
                matrix[i][m-1-r] = res[total];
                map[i][m-1-r] = 1;
                total+=1;
            }
        }
        d = d+1;
    }

    void right(vector<int>& res, vector<vector<int>>& matrix,int n, int m) {
        for(int i=m-1-t;i>=t;i--) {
            if(map[n-1-t][i]!=1) {
                matrix[n-1-t][i] = res[total];
                map[n-1-t][i] = 1;
                total+=1;
            }
        }
        r = r+1;
    }

    void top(vector<int>& res, vector<vector<int>>& matrix, int n, int m) {
        for(int i=n-l;i>=l;i--) {
            if(map[i][l-1]!=1) {
                matrix[i][l-1] = res[total];
                map[i][l-1] = 1;
                total+=1;
            }
        }
        t = t+1;
    }

    vector<vector<int>> generateMatrix(int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);  
        vector<vector<int>>matrix(n);
        for(int i=0;i<n;i++) {
            matrix[i].resize(n);
        }
        
        vector<int>nums;
        int ele = n*n;

        for(int i=0;i<ele;i++) {
            nums.push_back(i+1);
        }

        for(;;) {
            if(total>=(n*n)) break;
            left(nums,matrix,n,n);
            down(nums,matrix,n,n);
            right(nums,matrix,n,n);
            top(nums,matrix,n,n);
        }

        return matrix;
    }
};
