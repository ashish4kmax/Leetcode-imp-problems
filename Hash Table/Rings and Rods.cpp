class Solution {
public:
    int countPoints(string rings) {
        // We use the multimap to store the labled 0-9 numbered rod because in normal map the labled rod will
        // replace the coloured rings used.
        multimap<int,char>m;
        for(int i=1;i<rings.size();i+=2) {
            m.insert(pair<int,char>(rings.at(i)-'0',rings.at(i-1)));
        }

        // Now this second map rods is used to insert coloured rings used.
        unordered_map<int,string>rods;
        string temp;
        for(auto i:m) {
            rods[i.first]+=i.second;
        }

        int res=0;
        for(auto i:rods) {
            // Finally the below three lines check weather Red, Green & Blue rods are present or not if it's present
            // We increment the rods with RGB by 1.
            size_t found1 = (i.second).find('R');
            size_t found2 = (i.second).find('G');
            size_t found3 = (i.second).find('B');
            if (found1 != string::npos && found2 != string::npos && found3 != string::npos)
                res++;
        }

        // At the end we will get the no. of rods with RGB coloured rings in them. 
        return res;
    }
};
