// Optimized solution
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size();
        int c = matrix[0].size();

        int i=0;
        int j = matrix[0].size()-1;

        while(i<r && j>=0) {
            if(matrix[i][j]==target) return true;
            else if(matrix[i][j]>target) j--;
            else i++;
        }

        return false;
    }
};

/* Little Optimized
class Solution {
public:
    int bsearch(vector<int>&nums , int low, int high, int x) {
        if(low>high) return false;
        
        int mid = (low+high)/2;
        
        if(nums[mid] == x) return true;
        else if(nums[mid] > x) return bsearch(nums, low, mid-1, x);
        else return bsearch(nums, mid+1, high, x);
    }

    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i=0;i<m;i++) {
            if(bsearch(matrix[i], 0, n-1, target)) return true;
        }

        return false;
    }
};
*/
