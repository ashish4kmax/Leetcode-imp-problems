class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int n = moves.length();
        int a = 0, b= 0;
        for(int i=0; i<n; i++) {
            if(moves[i] == '_' || moves[i] == 'L') {
                a--;
            }
            else {
                a++;
            }
        }
        for(int i=0; i<n; i++) {
            if(moves[i] == '_' || moves[i] == 'R') {
                b++;
            }
            else {
                b--;
            }
        }
        
        return max(abs(a),abs(b));
        
    }
};
