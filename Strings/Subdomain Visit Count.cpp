class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        unordered_map<string,int>map;
        vector<string>res;

        int n = cpdomains.size();
        for(int i=0;i<n;i++) {
            int m = cpdomains[i].length();
            string temp = "";
            string val = "";
            int index = -1;
            for(int j=0;j<m;j++) {
                if(isdigit(cpdomains[i][j])) {
                    val+=cpdomains[i][j];
                }
                else {
                    index = j;
                    break;
                }
            }   

            string test;
            int value = stoi(val);
            for(int j=m-1;j>-1;j--) {
                if(j==index) break;

                if(cpdomains[i][j]=='.') {
                    test = temp;
                    reverse(test.begin(),test.end());
                    map[test] += value;
                    temp+='.';
                }
                else {
                    temp+=cpdomains[i][j];
                }
            }

            test = temp;
            reverse(test.begin(),test.end());
            map[test] += value;
        }

        for(auto i:map) {
            string test = "";
            test+=to_string(i.second);
            test+=" ";
            test+=i.first;
            res.push_back(test); 
        } 

        return res;
    }
};
