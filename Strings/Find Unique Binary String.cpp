class Solution {
public:
    string findDifferentBinaryString(vector<string>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        unordered_map<string,bool>m;
        int n = nums.size();

        for(int i=0;i<n;i++) {
            m[nums[i]] = true;
        }

        for(int i=0;i<pow(2,n);i++) {
            string temp ="";
            int num = i;
            while(num>0) {
                if(num%2==0) {
                    temp+="0";
                }
                else {
                    temp+="1";
                }
                num/=2;
            }
            while(temp.length()!=n) {
                temp+="0";
            }
            reverse(temp.begin(),temp.end());
            if(m[temp]==false) {
                return temp;
            }
        }

        return "-1";
    }
};
