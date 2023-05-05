class Solution {
public:
    int splitNum(int num) {
        string number = to_string(num);
        // Sort the digits and then concatinate the even and odd digits.
        sort(number.begin(),number.end());
        string temp1;
        string temp;
        int res=0;
        for(int i=0;i<number.length();i++) {
            if(i%2==0) {
                temp+=number.at(i);
            }
            else {
                temp1+=number.at(i);
            }
        }
        res = stoi(temp)+stoi(temp1);
        return res;   
    }
};
