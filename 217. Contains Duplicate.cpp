#include <vector>
#include <unordered_set>

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_set<int> dup;
        for (int num : nums) {
            if (dup.find(num) != dup.end()) {
                return true;
            }
            dup.insert(num);
        }
        return false;
    }
};
