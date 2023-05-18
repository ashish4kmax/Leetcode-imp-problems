/*
-----------------------------------Optimized solution------------------------------------
*/
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        ios_base::sync_with_stdio(false);
        vector<bool>inc(n,false);
        for(int i=0;i<edges.size();i++) {
            inc[edges[i][1]] = true;
        }
        vector<int>res;
        for(int i=0;i<inc.size();i++) {
            if(!inc[i]) {
                res.push_back(i);
            }
        }

        return res;
    }
};


/*
--------------------------------------Naive solution------------------------------------
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        unordered_map<int,bool>v;
        for(int i=0;i<edges.size();i++) {
            v[edges[i][0]] = true;
        }

        for(int i=0;i<edges.size();i++) {
            v[edges[i][1]] = false;
        }

        vector<int>min;
        for(auto i:v) {
            if(i.second == true) {
                cout<<i.first<<endl;
                min.push_back(i.first);
            }
        }

        return min;
    }
};
*/
