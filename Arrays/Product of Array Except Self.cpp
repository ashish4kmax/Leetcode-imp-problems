// Using prefix sum concept:-
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(), 1);
        // first, compute the prefix product and store in res
        // res[i] = product of elements in nums from index 0, 1, ... to i - 1
        for (int i = 0; i < nums.size() - 1; ++i) {
            res[i + 1] = nums[i] * res[i]; 
        }
        // second, compute the final result
        int suffixProduct = 1;
        for (int j = nums.size() - 1; j > 0; --j) {
            suffixProduct *= nums[j];
            res[j - 1] *= suffixProduct;
        }
        return res;
    }
};

/* My solution:-
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int zc=0;
        int n = nums.size();
        for(int i=0;i<n;i++) {
            if(nums[i]==0) {
                zc++;
            }
        }

        if(zc>1) {
            return vector<int>(n,0);
        }
        else if(zc==1) {
            int mult = 1;
            for(int i=0;i<n;i++) {
                if(nums[i]!=0) mult*=nums[i]; 
            }

            for(int i=0;i<n;i++) {
                if(nums[i]==0) nums[i] = mult;
                else nums[i] = 0;
            }
        }
        else {
            int mult = 1;
            for(int i=0;i<n;i++) {
                mult*=nums[i]; 
            }

            for(int i=0;i<n;i++) {
                nums[i] = mult*pow(nums[i],-1);
            }
        }

        return nums;
    }
};
*/
