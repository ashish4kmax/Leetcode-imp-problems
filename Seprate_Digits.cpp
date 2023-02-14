class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>temp;
        vector<vector<int>>ans;
        int rem=0;
        int n=0;
        for(int i=0;i<nums.size();i++) {
            n=nums[i];
            while(n>0) {
                rem=n%10;
                temp.push_back(rem);
                n/=10;
            }
            reverse(temp.begin(),temp.end());
            ans.push_back(temp);
            temp.clear();
        }

        vector<int>finalans;
        for(int i=0;i<ans.size();i++) {
            for(int j=0;j<ans[i].size();j++) {
                finalans.push_back(ans[i][j]);
            }
        }
        cout<<nums.size();
        return finalans;   
    }
};
