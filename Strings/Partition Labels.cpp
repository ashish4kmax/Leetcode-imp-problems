// Naive O(N*N) time and O(1) space solution.

class Solution {
public:
  vector<int> partitionLabels(string s) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int>res;
    int n = s.length();
    int maxidx = -1;
    int pos = 0;
    string temp = "";
    temp += s;
    reverse(temp.begin(),temp.end());
    for(int i=0;i<n;i++) {
      int found = (n-1)-temp.find(s[i]);
      maxidx = max(maxidx, found);
      if(maxidx == i) {
        if(res.size()==0) {
          res.push_back(i+1);
          pos+=res[res.size()-1]-1;
        }
        else {
          res.push_back(i-pos);
          pos+=res[res.size()-1]; 
        }
      }
    }

    return res;
  }
};


/* Efficient O(N) time and O(N) space solution.
class Solution {
public:
    vector<int> partitionLabels(string s) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        unordered_map<char,int>mp;
        // filling impact of character's
        // using the hashmap to store the location of the string char that is last found.
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            mp[ch] = i;
        }
        // making of result
        vector<int> res;
        int prev = -1;
        int maxi = 0;
        
        for(int i = 0; i < s.size(); i++){
            maxi = max(maxi, mp[s[i]]);
            if(maxi == i){
                // partition time
                res.push_back(maxi - prev);
                prev = maxi;
            }
        }
        return res;
    }
};
*/
