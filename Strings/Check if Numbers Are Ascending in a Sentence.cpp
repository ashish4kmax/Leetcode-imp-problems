class Solution {
public:
    bool areNumbersAscending(string s) {
        string word;
        stringstream ss(s);
        s.erase();
        vector<int>ans;
      
        // By using the stringstream command we basically get all the strings in the scentence.
        
        while(ss>>word) {
             // Now using this if condition a string is definietly a number if it's last digit's ascii value is less than 58 because ascii value of 0 is 48 and 9 is 57. 
            if(word.at(word.length()-1)<58) {
                ans.push_back(stoi(word));    
            }
        }
        
        for(int i=0;i<ans.size()-1;i++) {
            if(ans[i]>=ans[i+1]) {
                return false;
            }
        }
        return true;
    }
};
