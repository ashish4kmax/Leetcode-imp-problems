class Solution {
public:
    string toHex(int num) {
        if(num==0) {
            return "0";
        }
        else {
            unordered_map<int,char>m;
            for(int i=0;i<10;i++) {
                m.insert({i,(char)(i+48)});
            }
            m.insert({10,'a'});
            m.insert({11,'b'});
            m.insert({12,'c'});
            m.insert({13,'d'});
            m.insert({14,'e'});
            m.insert({15,'f'});
            int rem=0;
            string ans;

            if(num<0) {
                u_int n = num;
                // use the same remainder technique.
                while (n) {
                    ans = m[n % 16] + ans;
                    n /= 16;
                }
            }

            else {
                while(num>0) {
                    rem = num%16;
                    ans += m[rem];                
                    num/=16;
                }
                reverse(ans.begin(),ans.end());
            }

            return ans;
        }
    }
};
