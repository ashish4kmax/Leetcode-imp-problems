class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++) {
            m[nums[i]]++;
        }

        vector<pair<int,int>>ans;
        vector<pair<int,int>>res;
        for(auto i:m) {
            ans.push_back({i.second,i.first});
        }

        sort(ans.begin(),ans.end());
        
        vector<int>left;
        int count = 1;
        int freq = 0;

        for(int i=0;i<ans.size();i++) {
            if(i<ans.size()-1 && ans[i].first == ans[i+1].first) {
                res.push_back({ans[i].second,ans[i].first});
                freq = ans[i].first;
                count++;
            }
            else {    
                if(count>1) {
                    res.push_back({ans[i].second,ans[i].first});
                    reverse(res.begin(),res.end());
                    for(int j=0;j<res.size();j++) {
                        for(int k=0;k<freq;k++) {
                            left.push_back(res[j].first);
                        }
                    }
                    count = 1;
                    res.clear();
                }
                else {
                    for(int j=0;j<ans[i].first;j++) {
                        left.push_back(ans[i].second);
                    }
                }
            }
        }

        return left;
    }
};
