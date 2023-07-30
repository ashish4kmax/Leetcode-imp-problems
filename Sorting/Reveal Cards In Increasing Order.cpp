// Naive approch queues can be used for efficient approch.
class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        vector<int>res;
        sort(deck.begin(),deck.end());
        int n = deck.size();
        
        int j = n-1;
        while(res.size()!=deck.size()) {
            res.insert(res.begin(),deck[j]);
            if(res.size()>2) {
                int ins = res[res.size()-1];
                for(int i=res.size()-1;i>0;i--) {
                    res[i] = res[i-1];
                }
                res[1] = ins;
            }

            j--;
        }

        return res;
    }
};
