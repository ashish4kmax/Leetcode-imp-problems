class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        // We use a hash map 'basket' to store the number of each type of fruit.
        unordered_map<int, int> basket;
        int left = 0, maxPicked = 0;
        
        // Add fruit from the right index (right) of the window.
        for (int right = 0; right < fruits.size(); ++right) {
            basket[fruits[right]]++;
            
            // If the current window has more than 2 types of fruit,
            // we remove fruit from the left index (left) of the window,
            // until the window has only 2 types of fruit.
            while (basket.size() > 2) {
                basket[fruits[left]]--;
                if (basket[fruits[left]] == 0)
                    basket.erase(fruits[left]);
                left++;
            }
            
            // Update maxPicked.
            maxPicked = max(maxPicked, right - left + 1);
        }
        
        // Return maxPicked as the maximum number of fruits we can collect.
        return maxPicked;
    }
};

/*
Algorithm

1) Initialize max_picked = 0 as the maximum fruits we can collect, and use hash map basket to record the types of fruits in the current window.
2) Start with an empty window having left = 0 and right = 0 as its left and right index.
3) We iterate over right and add fruits[right] to this window.
      If there are no more than 2 types of fruits, this subarray is valid.
      Otherwise, we need to keep removing fruits from the left side until there are only 2 types of fruits in the window.
      Then we update max_picked as max(max_picked, right - left + 1).
4)Once we finish iterating, return max_picked as the maximum number of fruits we can collect.
*/
