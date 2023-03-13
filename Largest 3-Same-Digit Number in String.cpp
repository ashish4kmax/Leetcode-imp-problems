class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string>s;
        string temp;
        for(int i=0;i<3;i++) {
            temp += num.at(i);
        }

        if(temp.at(0)==temp.at(1) && temp.at(1)==temp.at(2)) {
            s.push_back(temp);
        }

        for(int i=3;i<num.length();i++) {
            temp.erase(temp.begin());
            temp.insert(temp.end(),num.at(i));
            if(temp.at(0)==temp.at(1) && temp.at(1)==temp.at(2)) {
                s.push_back(temp);
            }
        }

        if(s.size()==0) {
            return "";
        }
        else {
            int max=0;
            for(int i=0;i<s.size();i++) {
                if(s[i]>s[max]) {
                    max = i;
                }
            }

            return s[max];
        }
                
    }
};
