class Solution {
public:
    bool checkPerfectNumber(int num) {
        // This map is the only possible set of true values in which divisiors add up to num.
        static unordered_set<int> n = {6, 28, 496, 8128, 33550336};
        return n.count(num);
    }
};
