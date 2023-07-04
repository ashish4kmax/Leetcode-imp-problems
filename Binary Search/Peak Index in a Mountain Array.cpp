class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

        int start=0;
        int end=arr.size()-1;
        
        while(start<end)
        {
           int mid=start+(end-start)/2; // To avoid overflows.
           if(arr[mid]<arr[mid+1])
            {
                start=mid+1;
            }
            if(arr[mid]>arr[mid+1])
            {
                end=mid;
            }
        }
        return start;
        
    }
};

/*
Linear approch O(n)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n = arr.size();
        for(int i=0;i<n-1;i++) {
            if(arr[i]>arr[i+1]) return i;
        }
        return -1;
    }
};
*/
