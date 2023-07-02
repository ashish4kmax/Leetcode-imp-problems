class Solution {
public:
    int bsearch(vector<int>& arr, int low, int high, int x) {
        if(low>high) return -1;

        int mid = (low+high)/2;

        if(arr[mid]==x) return mid;
        else if(arr[mid]>x) return bsearch(arr, low, high-1, x);
        else return bsearch(arr, low+1, high, x);
    }

    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());

        int n = nums1.size();
        int m = nums2.size();

        vector<int>m1;
        vector<int>m2;

        m1.resize(1001);
        m2.resize(1001);

        for(int i=0;i<n;i++) {
            m1[nums1[i]]++;
        }

        for(int i=0;i<m;i++) {
            m2[nums2[i]]++;
        }

        vector<int>res;
        for(int i=0;i<n;i++) {
            int search = bsearch(nums2, 0, m-1, nums1[i]);
            if(search>-1) {
                if(m1[nums1[i]]!=0 && m2[nums2[search]]!=0) {
                    res.push_back(nums1[i]);
                    m1[nums1[i]]-=1;
                    m2[nums2[search]]-=1;
                }
            }
        }

        return res;
    }
};
