class Solution {
public:
    int minSetSize(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int>m;
        for(int i=0;i<n;i++) {
            m[arr[i]]++;
        }

        vector<int>ans;

        for(auto i:m) {
            ans.push_back(i.second);
        }

        int h = n/2;
        int s = 0;
        sort(ans.begin(),ans.end());
        for(int i=ans.size()-1;i>=0;i--) {
            cout<<ans[i]<<endl;
            if(n<=h) return s;
            n-=ans[i];
            s++;
        }

        return 1;
    }
};
