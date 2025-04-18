class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::sort(nums.begin(), nums.end());  // O(n log n)
        
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i] == nums[i - 1]) {
                return true;  // Duplicate found
            }
        }
        
        return false;  // No duplicates
    }
};
