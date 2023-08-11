class Solution {
public:
    bool win(vector<vector<char>>& grid) {
        // row
        if(grid[0][0]==grid[0][1] && grid[0][1]==grid[0][2]) return true;
        else if(grid[1][0]==grid[1][1] && grid[1][1]==grid[1][2]) return true;
        else if(grid[2][0]==grid[2][1] && grid[2][1]==grid[2][2]) return true;
        
        // column
        else if(grid[0][0]==grid[1][0] && grid[1][0]==grid[2][0]) return true;
        else if(grid[0][1]==grid[1][1] && grid[1][1]==grid[2][1]) return true;
        else if(grid[0][2]==grid[1][2] && grid[1][2]==grid[2][2]) return true;
        
        // diagonals
        else if(grid[0][0]==grid[1][1] && grid[1][1]==grid[2][2]) return true;
        else if(grid[0][2]==grid[1][1] && grid[1][1]==grid[2][0]) return true;
        
        // draw
        else {
            return false;
        }
    }

    string tictactoe(vector<vector<int>>& moves) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);  
        char A = 'X';
        char B = 'O';

        vector<vector<char>>grid;

        vector<char> row1{'1','2','3'};
        vector<char> row2{'4','5','6'};
        vector<char> row3{'7','8','9'};

        grid.push_back(row1);
        grid.push_back(row2);
        grid.push_back(row3);

        for(int i=0;i<moves.size();i++) {
            if(i%2==0) {
                grid[moves[i][0]][moves[i][1]] = A;
                if(win(grid)) return "A";
            }
            else {
                grid[moves[i][0]][moves[i][1]] = B;
                if(win(grid)) return "B";
            }
        }

        int tmoves = 0;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                if(grid[i][j]=='X') tmoves++;
                else if(grid[i][j]=='O') tmoves++;
            }
        }

        if(tmoves==9) return "Draw";
        else return "Pending";
    }
};
