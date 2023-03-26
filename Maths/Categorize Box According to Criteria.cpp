class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        int count1=0;
        int count2=0;
        double l=length;
        double w=width;
        double h=height;
        if(length>=10000 || width>=10000 || height>=10000 || l*w*h>=1000000000) {
            count1++;
        }
        if(mass>=100) {
            count2++;
        }

        if(count1==1 && count2==1) {
            return "Both";
        }
        else if(count1==0 && count2==0) {
            return "Neither";
        }
        else if(count1==1 && count2==0) {
            return "Bulky";
        }
        else {
            return "Heavy";
        }
    }
};
