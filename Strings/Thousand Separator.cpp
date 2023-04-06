class Solution {
public:
    string thousandSeparator(int n) {
        // It's a pretty simple question at first we can make the separator like it comes at every third plays meaning a thousands place.
        // So what we do is we make a count variable when it reaches 3 we add a '.' to the ans string.
        string temp = to_string(n);
        string ans;
        int count=0;
        for(int i=temp.length()-1;i>-1;i--) {
            if(isdigit(temp[i])) {
                count++;
            }

            if(count==3) {
                ans+=temp.at(i);
                ans+='.';
                count=0;
            }
            else {
                ans+=temp.at(i);
            }
        }

        reverse(ans.begin(),ans.end());
        if(n>999) {
            // Sometimes the '.' appears at the beginning so we try to remove it to get the correct ans.
            while(ans.at(0)=='.') {
                ans.erase(ans.begin());
            }
            return ans;
        }
        else {
            return temp;
        }
    }
};
