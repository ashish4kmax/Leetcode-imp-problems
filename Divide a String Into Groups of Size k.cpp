class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        string temp;
        vector<string>ans;
        for(int i=0;i<s.length();i++) {
            if(temp.length()==k) {
                if(k==1) {
                    //temp = to_string(temp);
                    ans.push_back(temp);
                    temp="";
                }
                else {
                    ans.push_back(temp);
                    temp="";
                }
            }
            temp+=s.at(i);
        }
        
        ans.push_back(temp);
        int index=-1;
        for(int i=0;i<ans.size();i++) {
            if(ans[i].length()<k) {
                index = i;
            }
        }

        if(index!=-1) {
            while(ans[index].length()!=k) {
                ans[index]+=fill;
            }
        }
        return ans;   
    }
};
