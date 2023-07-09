// TC:- O(n) SC:-O(1)
class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n = nums.size();

        int i,j;
        int res = 0;
        int cO=0,cZ=0;
        for(i=0,j=0; i<n && j<n;) {
            if(nums[j]==1) {
                cO++;
                j++;
            }
            else {
                cZ++;
                j++;
            }
  
            while(cZ > k) {
                res = max(res, cO+cZ-1);
                if(nums[i]==0) {
                    cZ--;
                    i++;
                }
                else {
                    cO--;
                    i++;
                }
            }
        }


        res = max(res, cO+cZ);

        return res;
    }
};
static bool     _foo = ios::sync_with_stdio(false);
static ostream* _bar = cin.tie(NULL);
