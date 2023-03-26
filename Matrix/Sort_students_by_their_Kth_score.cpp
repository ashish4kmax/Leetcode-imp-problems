class Solution {
public:
    vector<vector<int>> sortTheStudents(vector<vector<int>>& score, int k) {
        vector<pair<int,int>>index;
        vector<int>temp;
        vector<vector<int>>matrix;
        for(int i=0;i<score.size();i++) {
            index.push_back({score[i][k],i});
            temp.push_back(score[i][k]);
        }

        sort(index.begin(),index.end());
        reverse(index.begin(),index.end());
        
        int count=0;
        for(int i=0;i<index.size();i++) {
            //cout<<index[i].first<<","<<temp[i]<<endl;
            if(index[i].first == temp[i]) {
                count++;
            }
        }

        if(count==4) {
            return score;
        }

        else {
            for(int i=0;i<index.size();i++) {
                swap(temp,score[index[i].second]);
                matrix.push_back(temp);
            }
            return matrix;
        }

    } 
};
