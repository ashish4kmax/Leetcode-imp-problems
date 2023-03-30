class Solution {
public:
    int numDifferentIntegers(string word) {
        string num;
        // At first we are creating a vector vals to get the integer values but in string type as the digit length may be 
        // > 10.
        vector<string>vals;
        int number=0;
        // This map is used to get unique integers.
        unordered_map<string,int>m;
        for(int i=0;i<word.length();i++) {
            if(isdigit(word.at(i))) {
                num+=word.at(i);
            }
            else {
                if(num.length()!=0) {
                    vals.push_back(num);
                    num="";
                }
            }
        }

        if(num.length()!=0) {
            vals.push_back(num);
            num="";
        }

        for(int i=0;i<vals.size();i++) {
            // If in any case there is any leading zero in the integer we have to remove it so we romve it till there is 
            // a non-zero digit or if all are zeros till the length becomes 1 for that particular integer string. 
            if(vals[i].at(0)=='0') {
                while(vals[i].at(0)=='0' && vals[i].length()!=1) {
                    vals[i].erase(vals[i].begin());
                }

                // After that we use simple key value pair to get the freq for that integer and this makes sure that all 
                // keys are unique.
                m[vals[i]]++;
            }
            else {
                m[vals[i]]++;
            }
        }

        return m.size();
    }
};
