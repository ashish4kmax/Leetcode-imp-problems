class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int n = arr.size();

        int mindiff = INT_MAX;
        for(int i=0;i<n-1;i++) {
            mindiff = min(mindiff, arr[i+1]-arr[i]);
        }

        vector<vector<int>>res;
        
        for(int i=0;i<n-1;i++) {
            if((arr[i+1]-arr[i]) == mindiff) {
                res.push_back({arr[i],arr[i+1]});
            }
        }


        return res;
    }
};
