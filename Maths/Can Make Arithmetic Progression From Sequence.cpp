class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        // At first sort all the elements such that it can be used to check weather it is ap or not.
        sort(arr.begin(),arr.end());
        int d=arr[1]-arr[0];
        int count=0;
        // If the difference is same throughout the sequence then it is an ap or else it's not.
        for(int i=0;i<arr.size()-1;i++) {
            if((arr[i+1]-arr[i])!=d) {
                return false;
            }
        }

        return true;
    }
};
