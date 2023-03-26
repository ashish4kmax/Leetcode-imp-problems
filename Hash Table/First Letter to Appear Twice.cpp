class Solution {
public:
    char repeatedCharacter(string s) {
       unordered_map<char, int> M;
 
        // Traverse string str check if
        // current character is present
        // or not
        for (int i = 0; s[i]; i++)
        {
        // If the current characters
        // is not found then insert
        // current characters with
        // frequency 1

            if (M.find(s[i]) == M.end())
            {
                M.insert(make_pair(s[i], 1));
            }
 
            // Else update the frequency
            else
            {
                M[s[i]]++;
                if(M[s[i]]==2) {
                    return s[i];
                }
            }

        }
        return ' ';
    }
};
