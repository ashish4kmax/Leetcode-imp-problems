class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        if(letters[n/2]<=target) {
            for(int i=n/2;i<n;i++) {
                if(letters[i] > target) return letters[i];
            }
        }
        else {
            for(int i=0;i<=n/2;i++) {
                if(letters[i] > target) return letters[i];
            }
        }

        return letters[0];
    }
};

/*
** Without using binary search algorithm :- 

class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        vector<char> l;
        int n = letters.size();
        for(int i=0;i<n-1;i++) {
            if(letters[i]!=letters[i+1]) l.push_back(letters[i]);
        }
        l.push_back(letters[n-1]);

        for(int i=0;i<l.size();i++) {
            if(l[i]>target) return l[i];
        }

        return l[0];
    }
};
*/
