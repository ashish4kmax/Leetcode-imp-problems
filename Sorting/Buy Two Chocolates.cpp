class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min1 = 0;
        int min2 = 0;
        int n = prices.size();
        
        for(int i=0;i<n;i++) {
            if(prices[i]<prices[min1]) min1 = i;
        }
        
        int expen = prices[min1];

        prices.erase(prices.begin()+min1);
        
        for(int i=0;i<prices.size();i++) {
            if(prices[i]<prices[min2]) min2 = i;
        }

        expen+=prices[min2];
        
        if(expen>money) {
            return money;
        }
        else {
            return money-expen;
        }
    }
};
