class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_map<string,int>m;
        unordered_map<string,int>m1;
        // We can create two maps m1 and m2 one with taking the freq. of the city.
        for(int i=0;i<paths.size();i++) {
            m[paths[i][0]]++;
            m[paths[i][1]]++;
            // The other for inserting the destination city.
            m1.insert({paths[i][1],1});
        }

        string ans;
        for(auto i:m) {
            if(i.second==1) {
                // As we know that destination can come only once so what we do is check if its present in map 'm1'
                if(m1[i.first]==1) {
                    // If it's present then that is the only one with distination city as other which are not destination won't have freq = 1 as they are / may be visited more than once.
                    ans=i.first;
                }
            }
        }

        return ans;
    }
};
