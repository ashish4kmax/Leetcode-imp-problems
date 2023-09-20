// 2nd Approch optimized soln
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        /*
        Approach 5 Making Visted Values within an Array

The idea behind this approach is that as we iterate over the array we treat every element as idx and we make the element at that idx as negative
i.e for 4 i will go to arr[4] and make it -arr[4]
and now if at some point the element at that idx is already negative which means i had already visit that element and than that will be the duplicate element.

we are doing abs of nums[i] because we might mark that element at negative and array do not have negative idx and hence we make it positive for checking that indexed element.
        */
        
        int n = nums.size();
        
        for(int i = 0; i < n; ++i)
        {
            int idx = abs(nums[i]);
            
            if(nums[idx] < 0)
                return idx;
            
            nums[idx] = -nums[idx];
        }
        
        return n;
    }
};

/*
// TC:-O(n) and SC:-O(n)
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        vector<int>map (n+1, 0);

        for(int i=0;i<n;i++) {
            if(map[nums[i]]>0) return nums[i];
            map[nums[i]]++;
        }

        return -1;
    }
};
*/
