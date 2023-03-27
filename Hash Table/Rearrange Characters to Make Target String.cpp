class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        unordered_map<char,bool>m;
        unordered_map<char,int>m1;
        unordered_map<char,int>m2;

        // The reason we are using three maps is that the first map does the work of finding the target characters only 
        // to be selected for the m2 map and m1 has char-freq map of target string.
        // m2 has char-freq map of string s.
        for(int i=0;i<target.length();i++) {
            m1[target.at(i)]++;
            m.insert({target.at(i),true});
        }

        int count=0;
        vector<int>vals;
        for(int i=0;i<s.length();i++) {        
            if(m[s.at(i)]) {
                m2[s.at(i)]++;
            }
        }

        for(auto i:m2) {
            // now here we divide the m2-which has max char freq with target char-freq we get some amount of usable char freq.
            // We push that value of count into a vals vector.
            count=(m2[i.first]/m1[i.first]);
            vals.push_back(count);
        }

        if(m1.size()>m2.size()) {
            // now m1 and m2 won't have duplicated keys entry so it's definite that if m2 map has size less than that of
            // m1 map then there are no possible rearrangement because there are few char than the target char.
            return 0;
        }
        else {
            // Whereas if it's the vice verse then min of count entry is the possible rearrangements of making target word.
            return *min_element(vals.begin(),vals.end());
        }
    }
};
