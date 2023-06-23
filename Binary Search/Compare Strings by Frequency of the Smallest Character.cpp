class Solution {
public:
    vector<int> numSmallerByFrequency(vector<string>& queries, vector<string>& words) {
        vector<int>store1;
        vector<int>store2;

        vector<int>res;

        for(int i=0;i<queries.size();i++) {
            char min = queries[i].at(0);
            int freq = 0;
            for(int j=0;j<queries[i].length();j++) {
                if(queries[i].at(j)<min) min = queries[i].at(j);
            }

            for(int j=0;j<queries[i].length();j++) {
                if(queries[i].at(j)==min) freq++;
            }

            store1.push_back(freq);
        }

        for(int i=0;i<words.size();i++) {
            char min = words[i].at(0);
            int freq = 0;
            for(int j=0;j<words[i].length();j++) {
                if(words[i].at(j)<min) min = words[i].at(j);
            }

            for(int j=0;j<words[i].length();j++) {
                if(words[i].at(j)==min) freq++;
            }

            store2.push_back(freq);
        }

        for(int i=0;i<store1.size();i++) {
            int count=0;
            for(int j=0;j<store2.size();j++) {
                if(store1[i]<store2[j]) count++;
            }

            res.push_back(count);
        }

        return res;
    }
};
