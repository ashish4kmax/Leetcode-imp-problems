class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int>m;

        for (int i = 0; i < nums.size(); i++)
            m[nums[i]]++;
        
        int count=0;
        for(auto i:m) {
            if(i.first!=0) {
                if(i.second>1) {
                    count+=1;
                }
                else {
                    count+=i.second;
                }
            }
        }

        return count;
    }
};
