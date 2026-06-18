class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int e : nums) {
            if (seen.contains(e)) return true;
            seen.insert(e);
        }
        return false;
    }
};