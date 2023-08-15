class Solution {
public:
    vector<vector<int>> queensAttacktheKing(vector<vector<int>>& queens, vector<int>& king) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<vector<int>>res;

        int q = queens.size();
        char chessboard[8][8];
        for(int i=0;i<8;i++) {
            for(int j=0;j<8;j++) {
                chessboard[i][j] = ' ';
            }
        }

        for(int i=0;i<q;i++) {
            chessboard[queens[i][0]][queens[i][1]] = 'Q';
        }

        chessboard[king[0]][king[1]] = 'K';

        // row wise checking
        vector<int>pos;
        for(int i=king[1];i>=0;i--) {
            if(chessboard[king[0]][i]=='Q') {
                pos.push_back(king[0]);
                pos.push_back(i);
                break;
            } 
        }

        for(int i=king[1];i<8;i++) {
            if(chessboard[king[0]][i]=='Q') {
                pos.push_back(king[0]);
                pos.push_back(i);
                break;
            }    
        }

        // column wise checking 
        for(int i=king[0];i>=0;i--) {
            if(chessboard[i][king[1]]=='Q') {
                pos.push_back(i);
                pos.push_back(king[1]);
                break;
            } 
        }

        for(int i=king[0];i<8;i++) {
            if(chessboard[i][king[1]]=='Q') {
                pos.push_back(i);
                pos.push_back(king[1]);
                break;
            }
        }

        // upper two diagonal wise checking 
        for(int i=king[0],j=king[1];i>=0 && j>=0;i--,j--) {
            if(chessboard[i][j]=='Q') {
                pos.push_back(i);
                pos.push_back(j);
                break;
            } 
        }

        for(int i=king[0],j=king[1];i>=0 && j<8;i--,j++) {
            if(chessboard[i][j]=='Q') {
                pos.push_back(i);
                pos.push_back(j);
                break;
            }
        }

        // lower two diagonal wise checking
        for(int i=king[0],j=king[1];i<8 && j<8;i++,j++) {
            if(chessboard[i][j]=='Q') {
                pos.push_back(i);
                pos.push_back(j);
                break;
            } 
        }

        for(int i=king[0],j=king[1];i<8 && j>=0;i++,j--) {
            if(chessboard[i][j]=='Q') {
                pos.push_back(i);
                pos.push_back(j);
                break;
            }
        }

        //enterting positions
        if(pos.size()==0) return res;

        for(int i=0;i<pos.size()-1;i+=2) {
            vector<int>temp;
            temp.push_back(pos[i]);
            temp.push_back(pos[i+1]);
            res.push_back(temp);
        }

        return res;
    }
};
