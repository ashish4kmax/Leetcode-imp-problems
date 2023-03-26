class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int value=0;
        int count=0;
        unordered_map<int,bool>m;
        // At first we are here storing the values in arr and making it true.
        for(int i=0;i<arr.size();i++) {
            m.insert({arr[i],true});
        }

        for(int i=1;i<arr[arr.size()-1]+2;i++) {
            if(m[i]!=true) {  // Now we iterate till last value of array+1 and check if count==k if thats the thing we return the value as all the iterated values are missing positives.
                if(count==k) {
                    return value;
                }
                value = i;
                count++;
            }
        }

        // Now if count is less than k then we know that as array iteration is completed all the upcoming values are in a aritmetic progression of d=1 so we reduce k to k-count
        // And if we add it to the value we get missing positive for that position.
        k=k-count;
        value+=k;

        return value;
    }
};
