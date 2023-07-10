class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
    }

    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int n = arr.size();
        int res = 0;
        int sum = 0;
        if(k==n) {
            for(int i=0;i<n;i++) {
                sum+=arr[i];
            }

            if((sum/k)>=threshold) {
                res++;
            }
            return res;
        }

        sum = 0;
    
        for(int i=0;i<k;i++) {
            sum+=arr[i];
        }   
        
        if((sum/k)>=threshold) res++;

        int j=0;
        for(int i=k;i<n;i++) {
            sum-=arr[j];
            sum+=arr[i];
            if((sum/k)>=threshold) res++;
            j++;
        }

        return res;
    }
};
