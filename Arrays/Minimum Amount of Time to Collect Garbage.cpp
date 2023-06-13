// Optimized Prefix Sum:-
class Solution
{
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int last[128] = {}, res = 0;
        for (int i = 0; i < garbage.size(); ++i) {
            res += garbage[i].size();
            for (char c : garbage[i])
                last[c] = i;
        }
        for (int j = 1; j < travel.size(); ++j)
            travel[j] += travel[j - 1];
        for (int c : "PGM")
            if (last[c])
                res += travel[last[c] - 1];
        return res;
    }
};

// This is naive solution there is a optimization related to prefix sum for this question try doing it!!.
/*
class Solution
{
public:
    int garbageCollection(vector<string> &garbage, vector<int> &travel)
    {
        int mins = 0;
        int n = garbage.size();
        for (int i = 0; i < n; i++)
        {
            mins += garbage[i].length();
        }

        int countM = 0, countP = 0, countG = 0;
        int P,G,M;
        for(int i=0;i<n;i++) {
            for(int j=0;j<garbage[i].length();j++) {
                if(garbage[i][j]=='P') {
                    P = i;
                    goto end;
                } 
            }
        }
        end:

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < garbage[i].length(); j++) {
                if (garbage[i][j] == 'G') {
                    G = i;
                    break;
                }
            }
            if (G >= 0) {
                break;
            }
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < garbage[i].length(); j++) {
                if (garbage[i][j] == 'M') {
                    M = i;
                    break;
                }
            }
            if (M >= 0) {
                break;
            }
        }
        
        int cP=0,cG=0,cM=0;
        if (P >= 0) {
            if(P==0) P+=1;
            else P=1;
            for (int i = P; i < n; i++) {
                countP += travel[i - 1];
                if (garbage[i].find("P") < garbage[i].length()) {
                    cP += countP;
                    countP = 0;
                }
            }
        }

        if (G >= 0) {
            if (G == 0) G += 1;
            else G=1;
            for (int i = G; i < n; i++) {
                countG += travel[i - 1];
                if (garbage[i].find("G") < garbage[i].length()) {
                    cG += countG;
                    countG = 0;
                }
            }
        }

        if (M >= 0) {
            if (M == 0) M += 1;
            else M=1;
            for (int i = 1; i < n; i++) {
                countM += travel[i - 1];
                if (garbage[i].find("M") < garbage[i].length()) {
                    cM += countM;
                    countM = 0;
                }
            }
        }

        mins+=cG+cP+cM;
        return mins;
    }
};
*/
