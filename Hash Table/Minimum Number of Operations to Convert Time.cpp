class Solution {
public:
    int convertTime(string current, string correct) {
        // A naive approch to this solution is that at first we can insert all the possible variations and its no. of operations in a map.
        unordered_map<int,int>m;
        m.insert({5,1});
        m.insert({10,2});
        m.insert({15,1});
        m.insert({20,2});
        m.insert({25,3});
        m.insert({30,2});
        m.insert({35,3});
        m.insert({40,4});
        m.insert({45,3});
        m.insert({50,4});
        m.insert({55,5});

        string min1;
        min1+= correct.at(3);
        min1+= correct.at(4);
        string min2; 
        min2+= current.at(3);
        min2+= current.at(4);

        string h1;
        h1 += correct.at(0);;
        h1 += correct.at(1);
        string h2;
        h2 += current.at(0);;
        h2 += current.at(1);

        int hour= abs( stoi(h1) - stoi(h2));
        int operations = hour;
        int minutes = (stoi(min1) - stoi(min2));
        // If minutes is -ve that means we need to change no. of minutes to the given below formula and do %60 to that 
        // so that finally we get one of the values from map and operations will be added if minutes > 60 in this case that is//
        if(minutes<0) {
            minutes = (hour*(60) - abs(minutes));
            // Here if minutes > 60 we need to add those many operations to it.
            operations = minutes/60;
            minutes = (minutes%60);
        }

        int temp = 0;
        for(auto i:m) {
            //Finally we iterate till we get a map value equal to minutes or greater than it.
            if(minutes>=i.first) {
                temp = i.first;
                break;
            }
        }
        // So here we add that map value that is no. of operations required for this minutes!!.
        operations += m[temp];
        minutes-=temp;
        operations+=minutes;
        return operations;
    }
};
