class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int n = 8;

        // first we find the location of Rook
        int r=0;
        int c=0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<n;j++) {
                if(board[i][j]=='R') {
                    r=i;
                    c=j;
                    break;
                }
            }
        }

        // now that we have found the position of rook we check column wise which pawns can be attacked directly

        int res = 0;
        for(int i=r;i<n;i++) {
            if(board[r][i]=='p') {
                res++;
                break;
            }
            else if(board[r][i]=='B') {
                break;
            }
        }

        for(int i=r;i>=0;i--) {
            if(board[r][i]=='p') {
                res++;
                break;
            }
            else if(board[r][i]=='B') {
                break;
            }
        }

        for(int i=c;i<n;i++) {
            if(board[i][c]=='p') {
                res++;
                break;
            }
            else if(board[i][c]=='B') {
                break;
            }
        }

        for(int i=c;i>=0;i--) {
            if(board[i][c]=='p') {
                res++;
                break;
            }
            else if(board[i][c]=='B') {
                break;
            }
        }

        return res;
    }
};
