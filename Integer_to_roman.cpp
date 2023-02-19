class Solution {
public:
    string intToRoman(int num) {
        string roman;
        string value = to_string(num);
        int j=0;
        int val=0;
        for(int i=value.length()-1;i>=0;i--) {
            val = (value.at(i)-'0')*(pow(10,j));
            if(val == 1) {
                roman.insert(0, "I");
            }
            else if(val==2) {
                roman.insert(0, "II");
            }
            else if(val==3) {
                roman.insert(0, "III");
            }
            else if(val==4) {
                roman.insert(0, "IV");
            }
            else if(val==5) {
                roman.insert(0, "V");
            }
            else if(val==6) {
                roman.insert(0, "VI");
            }
            else if(val==7) {
                roman.insert(0, "VII");
            }
            else if(val==8) {
                roman.insert(0, "VIII");
            }
            else if(val==9) {
                roman.insert(0, "IX");
            }
            else if(val==10) {
                roman.insert(0, "X");
            }
            else if(val==20) {
                roman.insert(0, "XX");
            }
            else if(val==30) {
                roman.insert(0, "XXX");
            }
            else if(val==40) {
                roman.insert(0, "XL");
            }
            else if(val==50) {
                roman.insert(0, "L");
            }
            else if(val==60) {
                roman.insert(0, "LX");
            }
            else if(val==70) {
                roman.insert(0, "LXX");
            }
            else if(val==80) {
                roman.insert(0, "LXXX");
            }
            else if(val==90) {
                roman.insert(0, "XC");
            }
            else if(val==100) {
                roman.insert(0, "C");
            }
            else if(val==200) {
                roman.insert(0, "CC");
            }
            else if(val==300) {
                roman.insert(0, "CCC");
            }
            else if(val==400) {
                roman.insert(0, "CD");
            }
            else if(val==500) {
                roman.insert(0, "D");
            }
            else if(val==600) {
                roman.insert(0, "DC");
            }
            else if(val==700) {
                roman.insert(0, "DCC");
            }
            else if(val==800) {
                roman.insert(0, "DCCC");
            }
            else if(val==900) {
                roman.insert(0, "CM");
            }
            else if(val==1000) {
                roman.insert(0, "M");
            }
            else if(val==2000) {
                roman.insert(0, "MM");
            }
            else if(val==3000) {
                roman.insert(0, "MMM");
            }
            j++;
        }

        return roman;
    }
};
