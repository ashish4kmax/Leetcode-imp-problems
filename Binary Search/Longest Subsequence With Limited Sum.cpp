class Solution {
public:
    int bsearch(int arr[], int low, int high, int x, int len) {
        int mid = (low+high)/2;
        if(arr[mid]<=x) {
            len = mid;
        }
        else {
            return len;
        }

        if(arr[mid]>x) {
            return bsearch(arr, low, high-1, x, len);
        }
        else {
            return bsearch(arr, low+1, high, x, len);
        }
    }

    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        vector<int>res;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i=1;i<n;i++) {
            int sum = nums[i-1];
            nums[i] = nums[i]+sum;
        }

        int arr[n];

        for(int i=0;i<n;i++) {
            arr[i] = nums[i];
        }

        for(int i=0;i<queries.size();i++) {
            if(queries[i]<arr[0]) {
                res.push_back(0);
            }
            else {
                // To use binary Search here
                int len = bsearch(arr, 0, n-1, queries[i], len);
                res.push_back(len+1);
            }
        }

        return res;
    }
};
