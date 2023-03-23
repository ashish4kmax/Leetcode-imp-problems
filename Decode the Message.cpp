class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char,int>m;
        unordered_map<char,char>decode;
        int j=0;
        // The reason we are using two map is the first one two know weather the char is repeating or not and the second 
        // one to map the unique charecters key with a,b,c,d,....,z .
        for(int i=0;i<key.length();i++) {
            if(key.at(i)!=' ') {
                if(m[key.at(i)]<1) {
                    m[key.at(i)]++;
                    decode[key.at(i)] = (char)(97+j);
                    j++;
                }
            }
        }
        
        // After mapping we just simply map the characters according to the map we made to decode that is the "decode map".
        // We just replace the message characters.
        for(int i=0;i<message.length();i++) {
            if(message.at(i)!=' ') {
                message[i]=decode[message.at(i)];
            }
        }

        return message;
    }
};
