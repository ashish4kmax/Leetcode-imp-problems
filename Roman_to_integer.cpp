class Solution {
public:
    int romanToInt(string s) {
        int integer=0;
        for(int i=0;i<s.length();) {
            if( i+1!=s.length() && s.at(i)=='I' && s.at(i+1)=='V'  ) {
                integer+=4;
                i+=2;
            }
            else if( i+1!=s.length() && s.at(i)=='I' && s.at(i+1)=='X') {
                integer+=9;
                i+=2;
            }
            else if( i+1!=s.length() && s.at(i)=='X' && s.at(i+1)=='L') {
                integer+=40;
                i+=2;
            }
            else if( i+1!=s.length() && s.at(i)=='X' && s.at(i+1)=='C') {
                integer+=90;
                i+=2;
            }
            else if( i+1!=s.length() && s.at(i)=='C' && s.at(i+1)=='D') {
                integer+=400;
                i+=2;
            }
            else if( i+1!=s.length() && s.at(i)=='C' && s.at(i+1)=='M') {
                integer+=900;
                i+=2;
            }
            else if( s.at(i)=='I' ) {
                integer+=1;
                i++;
            }
            else if( s.at(i)=='V' ) {
                integer+=5;
                i++;
            }
            else if( s.at(i)=='X' ) {
                integer+=10;
                i++;
            }
            else if( s.at(i)=='L' ) {
                integer+=50;
                i++;
            }
            else if( s.at(i)=='C' ) {
                integer+=100;
                i++;
            }
            else if( s.at(i)=='D' ) {
                integer+=500;
                i++;
            }
            else if( s.at(i)=='M' ) {
                integer+=1000;
                i++;
            }
        }

        return integer;
    }
};
