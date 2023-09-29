// To correct and improve the solution some changes are to be made.
class Solution {
  public:
    bool checks(int m, int n, int ri, int ci, vector<vector<int>> &grid) {
        if(ri>0 && ci>0 && ri<m-1 && ci<n-1) {
            if(grid[ri][ci+1]==0 && grid[ri][ci-1]==0 && grid[ri-1][ci]==0 && grid[ri+1][ci]==0) return true;
            else return false;
        }
        else if(ci>0 && ci<m-1 && (ri==0 || ri==n-1)) {
            if((grid[ri][ci-1]==0 && grid[ri][ci+1]==0 && grid[ri+1][ci]==0) || (grid[ri][ci-1]==0 && grid[ri][ci+1]==0 && grid[ri-1][ci]==0)) return true;
            else return false;
        }
        else if(ri>0 && ri<n-1 && (ci==0 || ci==m-1)) {
            if((grid[ri-1][ci]==0 && grid[ri+1][ci]==0 && grid[ri][ci-1]==0) || (grid[ri-1][ci]==0 && grid[ri+1][ci]==0 && grid[ri][ci+1]==0)) return true;
            else return false;
        }
        else {
            if((grid[ri+1][ci]==0 && grid[ri][ci+1]==0) || (grid[ri+1][ci]==0 && grid[ri][ci-1]==0) || (grid[ri-1][ci]==0 && grid[ri][ci+1]==0) || (grid[ri][ci-1]==0 && grid[ri-1][ci]==0)) return true;
            else return false;
        }
    }
    
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        // Using BFS and bool checks to check if there is possibility of formation of anymore enclaves 
        int n = grid.size();
        int m = grid[0].size();
        int res = 0;
        unordered_map<int, bool>check;
        
        for(int i=0;i<n;i++) {
            int count = 0;
            int ri = -1;
            int ci = -1;
            if(check[i]==false) {
                for(int j=0;j<m;j++) {
                    if(grid[i][j]==1) {
                        ri = i;
                        ci = j;
                        count++;
                        grid[ri][ci] = 0;
                        check[ri] = true;
                        break;
                    }
                }
            }
            
            // partial BFS algorithm.
            if(ri>-1 && ci>-1) {
                while(true) {
                    if(ci+1<m && grid[ri][ci+1]==1) {
                        grid[ri][ci+1] = 0;
                        ci++;
                        count++;
                    }
                    
                    if(checks(m,n,ri,ci,grid)) break;
                    
                    if(ri+1<n && grid[ri+1][ci]==1) {
                        grid[ri+1][ci] = 0;
                        ri++;
                        count++;
                        check[ri] = true;
                    }
                    
                    if(checks(m,n,ri,ci,grid)) break;
                    
                    if(ci-1>=0 && grid[ri][ci-1]==1) {
                        grid[ri][ci-1] = 0;
                        ci--;
                        count++;
                    }
                    
                    if(checks(m,n,ri,ci,grid)) break;
                    
                    if(ri-1>=0 && grid[ri-1][ci]==1) {
                        grid[ri-1][ci] = 0;
                        ri--;
                        count++;
                        check[ri] = true;
                    }
                    
                    if(checks(m,n,ri,ci,grid)) break;
                }
            }
            
            res = max(res, count);
        }
        
        return res;
    }
};

/*
class Solution {
    public:
    int dx[4] = { -1 ,0 ,0, 1};
    int dy[4] = { 0, -1, 1, 0};
    int numberOfEnclaves(vector<vector<int>> &grid) {
        
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> visited(n,vector<int>(m,0));
        queue<pair<int,int>> pq;
        
        //1st and last row
        for(int i=0;i<m;i++)
        {
            //1st row
            if(grid[0][i])
            {
                pq.push({0,i});
                visited[0][i]=1;
            }
            
            //last row
            if(grid[n-1][i])
            {
                pq.push({n-1,i});
                visited[n-1][i]=1;
            }
        }
        
        //1st and last col
        for(int i=0;i<n;i++)
        {
            //1st col
            if(grid[i][0])
            {
                pq.push({i,0});
                visited[i][0]=1;
            }
            
            //last col
            if(grid[i][m-1])
            {
                pq.push({i,m-1});
                visited[i][m-1]=1;
            }
        }
        
        while(!pq.empty())
        {
            auto it=pq.front();
            pq.pop();
            int x=it.first;
            int y=it.second;
            
            for(int i=0;i<5;i++)
            {
                int row=x+dx[i];
                int col=y+dy[i];
                
                if(row<n and row>=0 and col<m and col>=0 and !visited[row][col] and grid[row][col])
                {
                    visited[row][col]=1;
                    pq.push({row,col});
                }
            }
        }
        
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(!visited[i][j] and grid[i][j])
                cnt++;
            }
        }
        
        return cnt;
    }
};
*/
